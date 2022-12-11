#include <stdio.h>
int main(void) {
 char a;
 short int b;
 a = 120;
 b = 32000;
 a = a + 10;
 b = b + 1000;
 printf("%hhd %hd", a, b);
 return 0;
}