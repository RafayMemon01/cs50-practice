#include <stdio.h>
#include <cs50.h>

void printHello(string name, int times);

int main(void){
    string userName = get_string("what is your name? ");
    int userTimes = get_int("Print count?");
   printHello(userName, userTimes);
}
void printHello(string name, int times){
    for(int i = 0; i <= times; i++){
        printf("hello %s \n", name);
    }
}
