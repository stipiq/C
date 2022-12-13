#include<stdio.h>
#include<math.h>
unsigned long long kvadrat(int n){
    unsigned long long rez = pow(n,2);
    return rez;
}
int main(){
    int n;
    printf("Upisite cijeli broj: ");
    scanf("%d", &n);
    printf("%d na kvadrat je %llu", n, kvadrat(n));
    return 0;
}