#include<stdio.h>
int main(){
    int n,i,j;
    printf("Upisite 10 prirodnih brojeva: ");
    int polje[10];
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &polje[i]);
    }
    int pomocna, min;
    for ( i = 0; i < 10 - 1; i++)
    {
        min = i + 1;
        for ( j = 2 + i; j < 10; j++)
        {
            if (polje[j] % 10 < polje[min] % 10)
            {
                min = j;
            }
            
        }
        if (polje[min] % 10 < polje[i] % 10)
        {
            pomocna = polje[i];
            polje[i]= polje[min];
            polje[min]= pomocna;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", polje[i]);
    }
return 0;
}