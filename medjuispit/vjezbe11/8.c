#include<stdio.h>
int main(){
    int i = 0;
    int br = 0;
    int n;
    char niz[100];
    printf("Upisite niz > ");
    fgets(niz, 101, stdin);
    while (niz[i] != '\0') {
       if (niz[i] == '\n')
       niz[i] = '\0';
       i = i + 1;
       br++;
    }br--;
    printf("Upisite poziciju > ");
    scanf("%d", &n);
    if (n == 0 || n > br)
    {
        printf("Neispravna pozicija!");
    }else {
        for ( i = 0; i < br; i++)
        {
            if (i != n - 1)
            {
                printf("%c", niz[i]);
            }            
        }
    }
return 0;
}