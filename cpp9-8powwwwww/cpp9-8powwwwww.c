#include <stdio.h>

double power(double x, int y);

int main(void)
{
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    printf("%lf", power(x, y));
}

double power(double x, int y)
{
    if(x == 0)
        return 0;
    else if(y == 0)
        return 1;
    else if(y < 0)
    {
        x = 1/x;
        y = -y;
    }
    x *= power(x, y - 1);
    return x;
}
