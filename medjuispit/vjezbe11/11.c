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
    printf("%s%s", niz, niz2);

return 0;
}
