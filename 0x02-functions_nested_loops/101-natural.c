#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
    int sum = 0;
    int number;

    for (number = 0; number < 1024; number++)
    {
        if (number % 3 == 0 || number % 5 == 0)
        {
            sum += number;
        }
    }

    printf("%d\n", sum);

    return (0);
}
