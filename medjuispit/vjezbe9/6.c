#include<stdio.h>
int main(){
    int m, n, i, j;
    do
    {
        printf("Upisite m > ");
        scanf("%d", &m);
    } while (m < 4 || m > 8);
    do
    {
        printf("Upisite n > ");
        scanf("%d", &n);
    } while (n < 5 || n > 10);
    printf("Upisite %dx%d clanova > \n", m, n);
    int polje[m][n];
   for ( i = 0; i < m; i++)
   {
       for ( j = 0; j < n; j++)
       {
           scanf("%d", &polje[i][j]);
       }
    

   }int polje2[n];
   printf("Sume po stupcima > \n");
    for ( j = 0; j < n; j++)
    {
        polje2[j] = 0;
        for ( i = 0; i < m; i++)
        {
            polje2[j]+= polje[i][j];
        }
    
    }
for ( i = 0; i < n; i++)
{
    printf("%d ", polje2[i]);
}

return 0;
}