#include <stdio.h>
#include <math.h>

float median(float a, float b, float c){
    if (a<=b && b<=c || c<=b && b<=a) return b;
    if (a>=b && a<=c || a>=c && a<=b) return a;
    if (c<=b && a<=c || c<=a && b<=c) return c;
}

int main(void){
    float a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nApsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f", sqrt(pow(median(a,b,c)-(a+b+c)/3, 2)));
  
    return 0;
}
