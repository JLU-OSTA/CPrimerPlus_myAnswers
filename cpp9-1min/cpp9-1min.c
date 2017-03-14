#include <stdio.h>

int min(int x, int y);

int main(void)
{
    printf("%d",min(10000, 1000));
}

int min(int x, int y)
{
    int temp = (x < y)?x:y;
    return temp;
}
