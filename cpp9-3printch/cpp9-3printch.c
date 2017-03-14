#include <stdio.h>

void printch(char ch, int i, int j);

int main(void)
{
    printch('h', 10, 100);
}

void printch(char ch, int i, int j)
{
    int x, y;
    for(x = 1; x <= j; x++)
    {
        for(y = 0; y <= i; y++)
            putchar(ch);
        putchar('\n');
    }
}
