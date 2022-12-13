#include<stdio.h>
unsigned int getbit(unsigned int broj,unsigned int n){
    unsigned int rez = broj >> n & 0x1;
    return rez;
}
int main(){
    unsigned int a,b;
    printf("Upisite nenegativni cijeli broj: ");
    scanf("%u", &a);
    printf("Upisite redni broj bita: ");
    scanf("%u", &b);
    printf("Vrijednost bita je: %u", getbit(a,b));
}