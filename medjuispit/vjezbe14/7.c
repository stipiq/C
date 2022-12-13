#include<stdio.h>
void fibonasi(int m){
    int fibonaci[m];
    fibonaci[0] = 1;
    fibonaci[1] = 1;
    for (int i = 2; i < m; i++)
    {
        fibonaci[i] = fibonaci[i - 1] + fibonaci[i - 2];
    }
    for (int i = 0; i < m; i++)
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
    int m;
    printf("Upisite broj clanova > ");
    scanf("%d", &m);
    fibonasi(m);
}