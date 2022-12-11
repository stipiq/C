#include<stdio.h> // rijesit kasnije
#define g 20000
#define r 100
int main(){
    int n, i;
    int brojac[200] = {0};
    printf("Upsite cijele brojeve u intervalu [1, 20000]: ");
    do
    {
        scanf("%d", &n);

    } while (n > 0 && n < 20001);
    

    

    return 0;
}
