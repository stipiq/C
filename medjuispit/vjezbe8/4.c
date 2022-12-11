#include <stdio.h>
int main(){
    int polje[40];
    int i;
    for ( i = 0; i < 40; i++)
    {
        if (i < 2){
        polje[i] = 1;
        }else {
        polje[i] = polje[i-2] + polje[i-1];
        }
    }
    for ( i = 0; i < 40; i++)
    {
        printf("%d\n", polje[i]);
    }
    
    

return 0;
}