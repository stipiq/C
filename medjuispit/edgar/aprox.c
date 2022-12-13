#include<stdio.h>
#include<math.h>
double fact(int n) {
   double rez;
   if (n == 0)
      rez = 1;
   else
      rez = n * fact(n - 1);
   return rez;
}
double ap(int n){
    double rez2 = 0;
    for (int i = 0; i <= n; i++)
    {
        rez2 += 1 / fact(i);
    }
    return rez2;
}

int main(){
    int a;
    printf("Upisite broj n: ");
    scanf("%d",&a);
    printf("Aproksimacija e: %.12lf\n", ap(a));
    double b = ap(a) - exp(1);
    printf("Razlika: %.12lf", b);

}