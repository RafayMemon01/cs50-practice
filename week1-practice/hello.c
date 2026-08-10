#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int i = 0;
    // while(i<3)
    // {
    //     printf("meow \n");

    //     i++;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("meow \n");
    // }
    int n;
    do{
        n = get_int("what's the number?");
    }
    while(n<5);
}
