#include<stdio.h>
int main(){
    int m,n, i, j;
    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);
    printf("Upisite %dx%d clanova > \n", m,n);
    int polje[m][n];
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &polje[i][j]);
        }
    }
for (j = 0; j < n; j = j + 1) {
   for (i = 0; i < m - 1; i = i + 1) {
      int k, ind_min = i + 1;
      for (k = i + 2; k < m; k = k + 1) {
         if (polje[k][j] < polje[ind_min][j])
            ind_min = k;
      }
   if (polje[ind_min][j] < polje[i][j]) {
      int pomocna = polje[i][j];
      polje[i][j] = polje[ind_min][j];
      polje[ind_min][j] = pomocna;
   }
   }
}
 printf("Nakon sortiranja stupaca:\n");
 for (i = 0; i < m; i = i + 1) {
    for (j = 0; j < n; j = j + 1) {
    printf("%4d", polje[i][j]);
    }
    printf("\n");
 }
return 0;
}