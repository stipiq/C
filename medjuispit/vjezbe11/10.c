#include<stdio.h>
int main(){
    int i = 0;
    int br = 0;
    int brr = 0;
    int n;
    char niz[100];
    char niz2[100];
    printf("Upisite 1. niz > ");
    fgets(niz, 101, stdin);
    while (niz[i] != '\0') {
       if (niz[i] == '\n')
       niz[i] = '\0';
       i = i + 1;
       br++;
    }br--;
    printf("Upisite 2. niz > ");
    fgets(niz2, 101, stdin);
    i = 0;
    while (niz2[i] != '\0') {
       if (niz2[i] == '\n')
       niz2[i] = '\0';
       i = i + 1;
       brr++;
    }brr--;
    printf("Upisite poziciju > ");
    scanf("%d", &n);
    if (n == 0 || n > br)
    {
        printf("Neispravna pozicija!");
    }else {
        for ( i = 0; i < br; i++)
        {
            if (i == n - 1)
            {
                for ( int j = 0; j < brr; j++)
                {
                    printf("%c", niz2[j]);
                }
                

                printf("%c", niz[i]);
            } else{
                printf("%c", niz[i]);

            }          
        }
    }
return 0;
}
