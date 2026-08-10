#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int*x = malloc(4 * sizeof(int));
    if(x == NULL){
        return 0;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    x[3] = 33;

    free(x);
    return 0;
}
