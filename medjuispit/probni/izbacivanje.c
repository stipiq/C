#include<stdio.h>
int main(){
    int i = 0;
    int br = 0;
    int n;
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, 21, stdin);
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
        printf("Neispravna pozicija");
    }else {
        printf("Rezultat: ");
        for ( i = 0; i < br; i++)
        {
            if (i == n - 1){
                i++;
                printf("%c", niz[i]);
                }
            else if (i > n - 1 && (niz[i] <= 'Z' && niz[i] >= 'A')){
                printf("%c", niz[i] + 32);}
            else if (i > n - 1 && (niz[i] <= '9' && niz[i] >= '0')){
                printf("%c", 'X');}
                else{
                    printf("%c", niz[i]);
                }
   
        }}
return 0;
}