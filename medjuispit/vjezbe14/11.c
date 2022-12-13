#include<stdio.h>
#include<math.h>
unsigned long long
fact(unsigned int n) {
   if (n == 0)
      return 1ULL;
   else
       return n * fact(n - 1);
}
double sinus(double x, int n){
    int i;
        double rez = 0;
        unsigned int a = (2 * i -1);
    for ( i = 1; i <= n; i++)
    {
        unsigned int a = (2 * i -1);
        rez += (pow(-1, i + 1) * pow(x, 2*i - 1))/fact(a) ;
    }
    return rez;
}

int main(){
    double x;
    int n;
    printf("Upisite x i n > ");
    scanf("%lf %d", &x, &n);
    printf("%.15lf\n", sinus(x,n));
    printf("%.15lf\n", sin(x));
    printf("Razlika: %.15lf", sinus(x,n) - sin(x));
}