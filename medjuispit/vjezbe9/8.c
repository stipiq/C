#include<stdio.h>//ponoviti
int main(){
    int n, i, j;
    printf("Upisite broj pretinaca > ");
    scanf("%d", &n);
    printf("Upisite podatke za pretince (%d): \n", n);
    struct pretinac
    {
        int sifra;
        int visina;
        int sirina;
        int dubina;
        float volumen;
    };
    struct pretinac a[n];
    for ( i = 0; i < n; i++)
    {
        printf("%d. pretinac: ", i + 1);
        scanf("%d %d %d %d", &a[i].sifra, &a[i].visina, &a[i].sirina, &a[i].dubina);
        a[i].volumen = (float)a[i].visina * a[i].sirina * a[i].dubina / 1000;
    }
    int ind_min;
    struct pretinac pomocna;
    for (i = 0; i < n - 1; i = i + 1) {
    ind_min = i + 1;
    for (j = i + 2; j < n; j = j + 1) {
      if (a[j].volumen > a[ind_min].volumen) 
      ind_min = j;
    }
    if (a[ind_min].volumen > a[i].volumen) {
    pomocna = a[i];
    a[i]= a[ind_min];
    a[ind_min] = pomocna;
}
}   
printf("Sortirani pretinci > \n");
for ( i = 0; i < n; i++)
    {
        printf("%d = %5.2f.litara\n", a[i].sifra, a[i].volumen);
    }
return 0;
}