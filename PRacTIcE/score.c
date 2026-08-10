#include <stdio.h>
#include <cs50.h>
float average(int length, int numbers[]);
int main(void){


    const int N = get_int("How many number average you want?.. \n");
    int scores[N];
    for(int i = 0; i < N; i++){
        scores[i] = get_int("Score: ");
    }

    printf("Average is: %f\n", average(N, scores));
}

float average(int length, int numbers[])
{
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + numbers[i];
    }

    return sum/ (float)length;
}
