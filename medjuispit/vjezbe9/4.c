#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Upisite m i n: ");
    scanf("%d %d", &m, &n);
    int polje[m][n];
    int polje2[m][n];
    printf("Upisite %dx%d clanova: \n",m, n);
    for ( i = 0; i < m; i++)
    {
    for ( j = 0; j < n; j++)
    {
        scanf("%d", &polje[i][j]);
    }
    }
   for ( i = 0; i < m ; i++)
   {
       for ( j = 0; j < n; j++)
       {
           polje2[i][j] = polje[i + 1][j];
           if (i == m - 1)
           {
            polje2[i][j] = polje[0][j];
           }
           
       }
   } 
   printf("Nakon pomaka: \n");
   for ( i = 0; i < m; i++)
   {
       for ( j = 0; j < n; j++)
       {
           printf("%4d ", polje2[i][j]);
       }
    printf("\n");
   }
return 0;
}