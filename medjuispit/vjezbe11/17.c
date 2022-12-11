#include<stdio.h>
int main(){
    int i = 0;
    struct ip
    {
        char ime[31];
        char prezime[31];
    };
    struct ip a[10];
    while (i < 10)
    {
        printf("%d. ime > ", i + 1);
        fgets(a[i].ime, 31, stdin);
        int k = 0;
        while (a[i].ime[k] != '\0') {
         if (a[i].ime[k] == '\n'){
         a[i].ime[k] = '\0';
         }
         k++;
         }

        printf("%d. prezime > ", i + 1);
        fgets(a[i].prezime, 31, stdin);
        k = 0;
        while (a[i].prezime[k] != '\0') {
         if (a[i].prezime[k] == '\n'){
         a[i].prezime[k] = '\0';
         }
         k++;
         }
        i++;
    }
    for ( i = 9; i >= 0; i--)
    {
        printf("%s, %s\n", a[i].prezime, a[i].ime);
    }
return 0;
}