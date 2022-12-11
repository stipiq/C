#include<stdio.h>
int main(){
    int i,j, n, k, l;
    printf("Upisite broj uplata > ");
    scanf("%d", &n);
    i = 0;
    printf("Upisujte uplate > ");
    struct uplate
    {
        int broj;
        int iznos;
    };
    struct uplate racuni[n];
    do
    {
        scanf("%d %d", racuni[i].broj, racuni[i].iznos);
        if (i != 0)
        {
            for ( j = i; i >= 0 ; j++)
        {
            if (racuni[i].broj == racuni[j].broj)
            {
                racuni[i].iznos += racuni[j].iznos;
            }
            
        }
        }
        for (k = 0; k < n - 1; k = k + 1) {
   int ind_min = k + 1;
   for (l = l + 2; l < n; l = l + 1) {
      if (racuni[l].iznos > racuni[ind_min].iznos) 
      ind_min = l;
    }
    if (racuni[ind_min].iznos > racuni[k].iznos) {
    int pomocna = racuni[k].iznos;
    racuni[k].iznos = racuni[ind_min].iznos;
    racuni[ind_min].iznos = pomocna;
}
}
        

        i++;
    } while (i < n);
    printf("Najveca suma %d", racuni[0].iznos);
    







return 0;
}