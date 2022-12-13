#include <stdio.h>
#include <math.h>

int djelitelj(int a, int b){
    int f=1, m;
    if (a<b) m=a;
    else m=b;
    for (int i=1; i<=m; i++) if(a%i==0 && b%i==0) f=i;
    return f;
}

int main(void){   
    int br, naz;
    printf("Upisite brojnik i nazivnik:");
    scanf(" %d %d", &br, &naz);
    printf(" Razlomak: %d/%d", br, naz);
    if (djelitelj(br,naz)==naz)
       printf("\nReduciran: %d", br/djelitelj(br,naz));
    else
    printf("\nReduciran: %d/%d", br/djelitelj(br,naz), naz/djelitelj(br,naz));

    return 0;
}