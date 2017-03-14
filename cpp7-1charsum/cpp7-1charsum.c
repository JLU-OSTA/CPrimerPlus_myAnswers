#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int space = 0, n = 0, others = 0;
    while((ch = getchar()) != STOP)
    {
        if(ch == ' ')
            space += 1;
        else if(ch == '\n')
            n += 1;
        else others +=1;
    }
    printf("space: %d, n: %d, others: %d", space, n, others);
}
