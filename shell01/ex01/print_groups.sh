echo $(groups $FT_USER | tr ' ' ',' | awk '{gsub(/[:_]/, ""); if (NR>1) printf ","; printf $0}'
