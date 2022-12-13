#include<stdio.h>
void funkcija(int redak, int stupac){
    int i,j;
    printf("    ");
    for ( i = 1; i <= stupac; i++)
    {
        printf("%4d", i);
    }
    printf("\n");
    
    for ( i = 1; i <= redak; i++)
    {
        printf("%4d", i);
                for ( j = 1; j <= stupac; j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("Upisite broj redaka i stupaca: ");
    scanf("%d %d", &m,&n);
    funkcija(m,n);
}