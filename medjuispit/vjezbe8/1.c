#include<stdio.h>
int main(){
    int polje[10], i;
    printf("Upisite 10 cijelih brojeva: ");
    for ( i = 0; i < 10; i++){
        scanf("%d", &polje[i]);
    }
    for (i = 9; i > 0; i--){
        printf("%d, ", polje[i]);
        }
    printf("%d", polje[0]);
    return 0;
}
