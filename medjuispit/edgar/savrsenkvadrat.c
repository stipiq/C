#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int fact(int n) {
   int rez;
   if (n == 0)
      rez = 1;
   else
      rez = n * fact(n - 1);
   return rez;
}
int savrsen_kvadrat(int n){
    double a = sqrt(n);
    int b = floor(a);
    if ( (a - b) == 0 )
    {
        return 1;
    }else{
        return 0;
    }
    
}
int zbroj_znamenaka(int n){
    int zbroj = 0;
    int i = 1;
    n = fact(n);
    do
    {
       zbroj += (n / i) % 10;
       i = i * 10;
    } while (i != 100000000);
    return zbroj;
}
int main(){
    int a;
    printf("Upisite prirodni broj > \n");
    scanf("%d", &a);
    printf("Suma znamenaka od %d! ", a);
    if (savrsen_kvadrat(zbroj_znamenaka(a)) == 1)
    {
        printf("je savrsen kvadrat.");
    }else{
        printf("nije savrsen kvadrat.");

    }
    return 0;
}