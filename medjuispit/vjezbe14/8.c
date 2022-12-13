#include<stdio.h>
int kolikijeint(void){
    return sizeof(int);
}
int main(){
    printf("%d", kolikijeint());
    return 0;
}