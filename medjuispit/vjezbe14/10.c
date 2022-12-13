#include<stdio.h>
int getbit(unsigned int broj,unsigned int n){
    int i;
    return broj >> n & 0x1;
}
void printbit(unsigned int broj){
    int i;
    for ( i = 31; i >= 0; i--)
    {
        printf("%d", getbit(broj,i)) ;
    }
}
int main(){
    unsigned int a;
    printf("Upisite nenegativni cijeli broj > ");
    scanf("%u", &a);
    printbit(a);
    return 0;
    
}
