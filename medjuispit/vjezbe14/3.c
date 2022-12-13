#include<stdio.h>
#include<math.h>
double kvadrat(double n){
    double rez = pow(n,2);
    return rez;
}
int main(){
    double n;
    printf("Upisite cijeli broj: ");
    scanf("%lf", &n);
    printf("%.2lf na kvadrat je %.2lf", n, kvadrat(n));
    return 0;
}