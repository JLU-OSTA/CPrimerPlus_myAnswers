#include <stdio.h>
#include <ctype.h>

int alpha(char ch);

int main(void)
{
    char ch;
    ch = getchar();
    printf("%d", alpha(ch));
}

int alpha(char ch)
{
    if(isalpha(ch))
    {
        ch = toupper(ch);
        return ch - 64;
    }
    else
        return -1;
}
