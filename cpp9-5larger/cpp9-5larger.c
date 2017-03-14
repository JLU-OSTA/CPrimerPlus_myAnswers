#include <stdio.h>

void larger_of(double * p1, double * p2);

int main(void)
{
    double x = 5.12, y = 3.16;
    larger_of(&x, &y);
    printf("%f %f", x, y);
}

void larger_of(double * p1, double * p2)
{
    double temp = (*p1 > *p2)?*p1:*p2;
    *p1 = *p2 = temp;
}
