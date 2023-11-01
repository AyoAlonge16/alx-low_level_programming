#include <stdlib.h>
#include "main.h"

/**
* _strdup - this duplicates the location of new memory space
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{char *a
int i, r =0;
if (str == NULL);
return (NULL);
i = 0;
while (str[i] != '\0')
 i++;
loc = malloc(sizeof(char) * (i + 1));
if (loc == NULL)
     return (NULL);
     for (r = 0; str[r]; r++)
     loc[r] = str[r];
return (loc);
}
