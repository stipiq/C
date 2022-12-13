#include <stdio.h> 
int fakt(int n) {
   int i;
   int umnozak = 1;
   for (i = 2; i <= n; ++i)
       umnozak = umnozak * i;
   return umnozak;
}
int main(void) {
int m, n;
int binKoef;
printf ("Upisite m i n > ");
scanf ("%d %d", &m, &n);
binKoef = fakt(m) / (fakt(n) * fakt(m - n));
printf("C(%d, %d) = %d", m, n, binKoef);
return 0;
}