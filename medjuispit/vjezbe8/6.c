#include<stdio.h>
int main(){
    int n, i, bp = 0, bn = 0, k=0, l = 0;
    do{
        printf("Upisite cijeli broj u intervalu [3, 20]: ");
        scanf("%d", &n);
    }while( n < 2 || n > 21);
    printf("Upisite cijele brojeve (%d): ", n);
    int ulaz[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &ulaz[i]);
    }printf("Ulaz: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", ulaz[i]);
    }
    printf("\nParni: ");
    for ( i = 0; i < n; i++)
    {
        if (ulaz[i] % 2 == 0)
        {
            bp++;
        }else{
            bn++;
        }
        
    }
    int parni[bp];
    int neparni[bn];
    for ( i = 0; i < n; i++)
    {
        if (ulaz[i] % 2 == 0)
        {
            parni[k] = ulaz[i];
            k++;
        }else{
            neparni[l] = ulaz[i];
            l++;
        }
    }
    for ( k = 0; k < bp; k++)
    {
        printf("%d ", parni[k]);
    }
    printf("\nNeparni: ");
    for ( l = 0; l < bn; l++)
    {
        printf("%d ", neparni[l]);
    }
return 0;
}