#include <stdio.h>


int main(void)
{
    int i, j, product, next_product;

    for (i = 0; i <= 9; i++) 
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;
            next_product = i * (j + 1);
            if (product > 9)
            {
                putchar('0' + (product / 10));
                putchar('0' + (product % 10));
                if (j != 9)
                {
                    putchar(',');
                }
            }
            else
            {
                putchar('0' + product);
                if (j != 9)
                {
                    putchar(',');
                }
            }
            /*
            *I just added (j != 9) if not, the spaces will be printed
            *even on the iteration of the multiplier
            *space was printed but we didn't see it
            *adding (j != 9) will ensure that spaces will not be printed
            *when you reach the last iteration of the inner loop i.e the multiplier
            */

            if (next_product > 9)
            {
                putchar(' ');
            }
            else 
            {
                putchar(' ');
                putchar(' ');
            }
        }
        putchar('\n');
    }
    
    return (0);
}