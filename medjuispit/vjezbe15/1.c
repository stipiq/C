#include<stdio.h>
int fibs(int n){
if (n > 2)
{
    return fibs(n - 1) + fibs(n - 2);
}else{
    return 1;
}


    
}

int main(){
    int n;
    printf("Upisite redni broj clana niza  > ");
    scanf("%d", &n);
    printf("fibonacci(%d) = %d", n, fibs(n));
    return 0;
}