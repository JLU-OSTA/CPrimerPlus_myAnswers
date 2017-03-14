#include <stdio.h>
#define BASE 10
#define BASETIME 40
#define OVERWORKTIME 1.5
#define A 0.15
#define B 0.2
#define C 0.25

float tax(float in);

int main(void)
{
    float time, salary;
    scanf("%f", &time);
    if(time <= 40)
        salary = BASE * time;
    else
        salary = BASE * BASETIME + (time - BASETIME) * OVERWORKTIME * BASE;
    salary -= tax(salary);
    printf("%f",salary);
}

float tax(float in)
{
    if(in <= 300)
        return A * in;
    else if(in <= 450)
        return A * 300 + (in - 300) * B;
    else
        return A * 300 + B * 150 + C * (in - 450);
}
