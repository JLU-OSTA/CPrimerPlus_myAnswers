#include <stdio.h>
#define STOP '#'

int main(void)
{
    int line = 0;
    char ch;
    while((ch = getchar()) != STOP)
    {
        line += 1;
        printf("%c: %d ", ch, ch);
        if(line % 8 == 0)
            putchar('\n');
    }
}
