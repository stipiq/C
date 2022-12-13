#include<stdio.h>
long long fact(unsigned int n) {
unsigned long long rez;
if (n == 0)
rez = 1ULL;
else
rez = n * fact(n - 1);
return rez;
}
int main(){
    printf("Faktorijeli su: %llu ", fact(5));
    return 0;
}