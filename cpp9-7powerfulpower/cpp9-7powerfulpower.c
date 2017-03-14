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
    double ret = 1.0;
    int index;
    if(x == 0)
        ret = 0;
    else if(y == 0)
        ret = 1;
    else if(y > 0)
    {
        for(index = 1; index <= y;index ++)
            ret *= x;
    }
    else
    {
        x = 1/x;
        y = -y;
        for(index = 1; index <= y;index ++)
            ret *= x;
    }
    return ret;
}
