#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
    int count;
    long long int prev = 1, current = 2, next;

    printf("%lld, %lld, ", prev, current);

    for (count = 3; count <= 50; count++)
    {
        next = prev + current;
        if (count == 50)
            printf("%lld\n", next);
        else
            printf("%lld, ", next);

        prev = current;
        current = next;
    }

    return (0);
}
