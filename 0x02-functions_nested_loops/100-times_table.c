#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The times table to print
 *
 * Description: This function prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0, the function does not print anything.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int a, b, result;

    for (a = 0; a <= n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            result = a * b;

            if (b != 0)
            {
                printf(", ");
                if (result < 100)
                    printf(" ");
                if (result < 10)
                    printf(" ");
            }

            printf("%d", result);
        }
        printf("\n");
    }
}
