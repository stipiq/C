#include<stdio.h>
#include<stdbool.h>
bool jestvelikoslovo(char c){
    return c >= 'A' && c <= 'Z';
}

int main(){
    char znak;
    printf("Upisite znak: ");
    scanf("%c", &znak);
    if (jestvelikoslovo(znak))
    {
        printf("Jest veliko slovo");
    }else{
        printf("Nije veliko slovo");
    }
    return 0;
}