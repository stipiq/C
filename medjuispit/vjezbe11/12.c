#include<stdio.h> //napraviti do kraja
int main(){
    int i,j;
    char niz[80];
    printf("Upisite niz znakova > ");
    fgets(niz, 81, stdin);
    i = 0;
    int br = 0;
    int brojac[25];
    while (niz[i] != '\0') {
       if (niz[i] == '\n')
       niz[i] = '\0';
       i = i + 1;
       br++;
    }br--;







return 0;
}