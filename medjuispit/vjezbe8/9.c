#include<stdio.h>
int main(){
    int n,i, d;
    printf("Upisite broj od 5 do 20 > ");
    scanf("%d", &n);
    int polje[n];
    printf("Upisite %d cijelih brojeva > ", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &polje[i]);
    }
    for ( i = 0; i < n ; i++)
    {
        printf("%d ", polje[i]);
        if ( i != n - 1)
        printf("%d ", polje[i] + polje[i + 1]);
    }
return 0;
}