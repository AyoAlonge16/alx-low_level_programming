#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
    long long int prev = 1, current = 2, next, sum = 0;

    while (current <= 4000000)
    {
        if (current % 2 == 0)
            sum += current;

        next = prev + current;
        prev = current;
        current = next;
    }

    printf("%lld\n", sum);

    return (0);
}
