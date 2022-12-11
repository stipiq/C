#include<stdio.h>
int main(){
    int n;
    char niz[21];
    printf("Upisite niz znakova > ");
    fgets(niz, 21, stdin);
    int i = 0;
    int br = 0;
    while (niz[i] != '\0') {
       if (niz[i] == '\n')
       niz[i] = '\0';
       i = i + 1;
       br++;
    }br--;
    printf("Niz: %s\n", niz);
    int sam = 0, sug = 0, ost = 0;
    for ( i = 0; i < br; i++)
    {
        if (niz[i] == 'A' || niz[i] == 'E' || niz[i] == 'I' || niz[i] == 'O' ||
           niz[i] == 'U' || niz[i] == 'a' || niz[i] == 'e' || niz[i] == 'i' ||
           niz[i] == 'o' || niz[i] == 'u' )
        {
            sam++;
        }else if ((niz[i] >= 'A' && niz[i] <= 'Z') ||
              (niz[i] >= 'a' && niz[i] <= 'z'))
    {
        sug++;
    }else{
        ost++;
    }
    }
    printf("Samoglasnici: %d\n", sam);
    printf("Suglasnici: %d\n", sug);
    printf("Ostali: %d", ost);
return 0;
}