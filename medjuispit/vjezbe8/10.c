#include<stdio.h> //nije rjeseno do kraja
int main(){
    int i, n;
    printf("Upisite broj od 5 do 20 > ");
    scanf("%d", &n);
    int polje[n];
    int k = n / 2;
    int polje2[k];
    printf("Upisite %d cijelih brojeva > ", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &polje[i]);
    }
    for ( i = 0; i < n; i++)
    {
       if ( (i != 0) || (i % 2 != 0)){
       polje2[i] = polje[i];
       }
    }
    for ( i = 0; i < k; i++)
    {
        printf("%d", &polje2[i]);
    }
return 0;
}