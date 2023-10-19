#include <stdio.h>
int format(int n)
{
    if (n < 10)
    {
        putchar('0' + n);
    }
    else
    {
        format(n / 10);
    }
}

int main(void)
{
    int n = 986666;

    format(n);
    return (0);
}