#include<stdio.h>
int main(){
    int i,j;
    printf("Upisite 10 prirodnih brojeva: ");
    int polje[10];
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &polje[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 1 + i; j < 10; j++)
        {
            if (polje[i] % 10 > polje[j] % 10)
            {
                polje[i] = polje[j];
            }
            
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", polje[i]);
    }
return 0;
}