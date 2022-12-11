#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Upisite m i n: ");
    scanf("%d %d", &m, &n);
    int polje[m][n];
    printf("Upisite %dx%d clanova: \n",m, n);
    for ( i = 0; i < m; i++)
    {
    for ( j = 0; j < n; j++)
    {
        scanf("%d", &polje[i][j]);
    }
    }
    



return 0;
}