#include <stdio.h>

int squareRoot(int num) {
    int i = 0;
    
    while (i * i <= num) {
        if (i * i == num) {
            return i;
        }
        i++;
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("Entrez un nombre : ");
    scanf("%d", &num);
    
    int result = squareRoot(num);
    
    if (result != 0) {
        printf("La racine carrée entière de %d est : %d\n", num, result);
    } else {
        printf("La racine carrée de %d n'est pas entière.\n", num);
    }
    
    return 0;
}