#include<stdio.h>
int main(){
    int i, j;
    int n;
    struct osobe_s
    {
        int b;
        int g;
    };
    printf("Upisite broj osoba > ");
    scanf("%d", &n);
    struct osobe_s a[n];
    for ( i = 0; i < n; i++)
    {
        printf("%d. osoba > ", i + 1);
        scanf("%d %d", &a[i].b, &a[i].g);
    }
    for (i = 0; i < n - 1; i = i + 1) {
   int ind_min = i + 1;
   for (j = i + 2; j < n; j = j + 1) {
      if (a[j].g < a[ind_min].g) 
      ind_min = j;
    }
    if (a[ind_min].g < a[i].g) {
    int pomocna = a[i].g;
    a[i].g = a[ind_min].g;
    a[ind_min].g = pomocna;
}
}

   
    

return 0;
}