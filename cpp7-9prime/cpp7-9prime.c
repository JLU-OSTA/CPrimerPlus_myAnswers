#include <stdio.h>

int main(void)
{
    int in, index, i, prime = 1;
    printf("Please enter a number, q to quit\n");
    while((scanf("%d", &in)) == 1)
    {
        for(index = 2; index <= in; index++)
        {
            prime = 1;
            for(i = 2; (i * i) <= index; i++)
            {
                if(index % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
                printf("%d\n",index);
         }
    }
}
