#include <stdio.h>
#define STOP '0'

int main(void)
{
    int in, num1 = 0, num2 = 0, sum1 = 0, sum2 = 0;
    float ave1, ave2;
    while(1)
    {
        scanf("%d", &in);
        if(in == 0)
            break;
        else if(in % 2 == 0)
        {
            num2 += 1;
            sum2 += in;
        }
        else
        {
            num1 += 1;
            sum1 += in;
        }
    }
    ave1 = ((float)sum1) / num1;
    ave2 = ((float)sum2) / num2;
    printf("num1: %d, ave: %f \nnum2: %d, ave: %f", num1, ave1, num2, ave2);
}
