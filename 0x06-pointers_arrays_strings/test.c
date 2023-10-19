#include <stdio.h>
int format(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n < 10)
    {
        putchar('0' + n);
    }
    else
    {
        format(n / 10);
       putchar('0' + (n % 10));
    }
    return 0;
}

int main(void)
{
    int n = -986;

    format(n);
    return (0);
}