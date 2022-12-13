#include<stdio.h>
void fibonasi(void){
    int fibonaci[15];
    fibonaci[0] = 1;
    fibonaci[1] = 1;
    for (int i = 2; i < 15; i++)
    {
        fibonaci[i] = fibonaci[i - 1] + fibonaci[i - 2];
    }
    for (int i = 0; i < 15; i++)
    {
        if (i < 1)
        {
            printf("%d", fibonaci[i]);
        }else{
            printf(", %d", fibonaci[i]);
        }
    }
}
int main(){
    fibonasi();
    return 0;
}