#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

off_t custom_lseek(int fd, off_t offset, int whence) {
    off_t currentPosition = 0;
    
    if (whence == SEEK_SET) {
        if (offset < 0) {
            printf("Erreur : déplacement avant le début du fichier non supporté.\n");
            return -1;
        }
    } else if (whence == SEEK_CUR) {
    } else if (whence == SEEK_END) {
        if (offset > 0) {
            printf("Erreur : déplacement après la fin du fichier non supporté.\n");
            return -1;
        }
    } else {
        printf("Drapeau whence invalide\n");
        return -1;
    }

    char buffer;
    ssize_t bytesRead;

    if (whence == SEEK_SET) 
	{
        while (currentPosition < offset) {
            bytesRead = read(fd, &buffer, 1);
            if (bytesRead == -1) {
                printf("Erreur lors du déplacement du curseur de fichier\n");
                return -1;
            }
            if (bytesRead == 0) {
                printf("Atteint la fin de fichier avant la position cible.\n");
                return -1;
            }
            currentPosition++;
        }
    }

    return currentPosition;
}

int main() {
    char *fileName = "numbers.dict";
    int fd = open(fileName, O_RDONLY);

    if (fd == -1) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }

    off_t deplacement = custom_lseek(fd, 10, SEEK_SET);

    if (deplacement == -1) 
	{
        close(fd);
        return 1;
    }

    char *caractere = NULL; // Pointeur vers le tableau de caractères
    size_t tailleMax = 64;  // Taille maximale initiale du tableau
    size_t tailleCourante = 0; // Taille courante du tableau
    ssize_t lu;

    caractere = malloc(tailleMax); // Allocation dynamique de mémoire

    if (caractere == NULL) {
        printf("Erreur lors de l'allocation de mémoire\n");
        close(fd);
        return 1;
    }

    while ((lu = read(fd, caractere + tailleCourante, 1)) == 1) {
        tailleCourante++;
        if (tailleCourante == tailleMax) {
            // Le tableau est plein, augmentons sa taille
            tailleMax *= 2;
            caractere = realloc(caractere, tailleMax);
            if (caractere == NULL) {
                printf("Erreur lors de la réallocation de mémoire\n");
                close(fd);
                return 1;
            }
        }
    }

    if (lu == -1) 
	{
        printf("Erreur lors de la lecture du fichier\n");
        close(fd);
        free(caractere);
        return 1;
    }

    caractere[tailleCourante] = '\0'; // Ajouter un terminateur de chaîne pour l'affichage
    printf("Caractères lus après le déplacement : %s\n", caractere);

    close(fd);
    free(caractere); // Libérer la mémoire allouée dynamiquement

    return 0;
}
