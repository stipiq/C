#include<stdio.h>
int main(){
    int polje[4][3][6];
    int a = 111;
    for ( int i = 0; i < 4; i++)
    {
        printf("%d. sloj: \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                printf("%4d ", a + k);
            }
            printf("\n");
            a = a + 10;
        }
        if ( i != 3)
        printf("\n");
        a = 111 + (i + 1) * 100;
    }
    







return 0;
}