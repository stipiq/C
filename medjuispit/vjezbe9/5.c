#include<stdio.h>
int main(){
    int polje[11][11];
    int i,j;
   for ( i = 0; i < 11; i++)
   {
       for ( j = 0; j < 11; j++)
       {
        if (i == j){
        printf("%d ", 1);
        }else if( i == 0){
            printf("%d ", 1);
        }
        else if( j == 0){
            printf("%d ", 1);
        }else if( i == 10){
            printf("%d ", 1);
        }
        else if( j == 10){
            printf("%d ", 1);
        }else if( i == 0){
            printf("%d ", 1);
        }else if( i + j == 10){
            printf("%d ", 1);
        }
        else{
            printf("%d ", 8);
        }
        }
    printf("\n");
       }
return 0;
}