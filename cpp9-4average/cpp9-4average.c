#include <stdio.h>

double ave(double x, double y);

int main(void)
{
    printf("%f", ave(21, 5));
}

double ave(double x, double y)
{
    double ret = 1/(((1/x) + (1/y))/2);
    return ret;
}
