#include <cs50.h>
#include <stdio.h>

int main(void){

    int x = get_int("What is X ? ");
    int y = get_int("What is Y ?");

    if(x>y){
        printf("X is greater than Y \n");
    } else if(x<y){
        printf("Y is Greater thn X \n");
    }else{
        printf("Both Are equal \n");
    }
}