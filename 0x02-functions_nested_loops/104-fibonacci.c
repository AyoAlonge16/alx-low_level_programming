#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
    int i, n = 98;
    int prev = 1, current = 2;

    printf("%d, %d", prev, current);

    for (i = 3; i <= n; i++)
    {
        int next = prev + current;
        if (i == n)
            printf("\n");
        else
            printf(", ");
        printf("%d", next);
        
        prev = current;
        current = next;
    }

    return (0);
}
