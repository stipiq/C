#include<stdio.h>
int main(){
    char niz[9];
    int ascii, i = 0;
    printf("Upisite brojeve > ");
    do
    {
        scanf("%d", &ascii);
        if (ascii >= 'A' && ascii <= 'Z')
        {
            niz[i] = ascii;
            i++;
        }
        
    } while (i < 8 && ascii >= 'A' && ascii <= 'Z');
    niz[i] = '\0';
    printf("%s", niz);
return 0;
}