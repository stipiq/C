#include<stdio.h>
int main(){
    int polje[10], i;
    printf("Upisite 10 cijelih brojeva: ");
    for ( i = 0; i < 10; i++){
        scanf("%d", &polje[i]);
    }
    int pomocna;
    for (i = 0; i < 10; i++){
        pomocna = polje[i];
        polje[i]= polje[10 - 1 - i];
        polje[10 - 1 - i] = pomocna;
        }
    for (i = 0; i < 10; i = i + 1) {
if (i > 0) {
printf(", ");
}
printf("%d", polje[i]);
}
    return 0;
}
