#include<stdio.h>
#include<math.h>
int kvadrat(int n){
    int rez = pow(n,2);
    return rez;
}
int main(){
    int n;
    printf("Upisite cijeli broj: ");
    scanf("%d", &n);
    printf("%d na kvadrat je %d", n, kvadrat(n));
    return 0;
}