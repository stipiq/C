#include<stdio.h>
int main(){
    char niz[21];
    int i = 0, brojac = 0, j;
    printf("Upisite niz znakova: ");
    fgets(niz, 21, stdin);
    while (niz[i] != '\0')
    {
        brojac++;
        i++;
    }
    brojac--;
    printf("Niz: %s", niz);
    for (i = 0; i < brojac - 1; i = i + 1) {
    int ind_min = i + 1;
   for (j = i + 2; j < brojac; j = j + 1) {
      if (niz[j] > niz[ind_min]) 
      ind_min = j;
    }
    if (niz[ind_min] > niz[i]) {
    int pomocna = niz[i];
    niz[i] = niz[ind_min];
    niz[ind_min] = pomocna;
}
}
    printf("\nNajveca ASCII vrijednost: %d", niz[0] );
return 0;
}