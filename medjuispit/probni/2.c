#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Upisite dimenzije dvodimenzijskog polja > ");
    scanf("%d %d", &m, &n);
    int polje[m][n];
    int prosjek[m];
    float b = n;
    for ( i = 0; i < m; i++)
    {
        printf("Upisite ocjene %d. gledatelja > ", i);
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &polje[i][j]);
            prosjek[i] += polje[i][j];
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n - 1; j++)
        {
            int k, min = j + 1;
            for ( k = j + 2; k < n; k++)
            {
                if (polje[i][k] < polje[i][min])
                {
                    min = k;
                }
            }
            if (polje[i][min] < polje[i][j])
            {
                int pomocna = polje[i][j];
                polje[i][j] = polje[i][min];
                polje[i][min] = pomocna;
            }
            
        }
        printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna ocjena kojom je ocijenio filomove iznosi %.1f\n", i, polje[i][0], prosjek[i] / b );
    }
return 0;
}