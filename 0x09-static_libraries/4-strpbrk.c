#include "main.h"
/**
 * _strpbrk - pount of entry
 * @s: the inputsg
 * @accept: input from user
 * Return: return 0 if successful
 */
char *_strpbrk(char *s, char *accept)
{
        	int k;
 
        	while (*s)
        	{
                    	for (k = 0; accept[k]; k++)
                    	{
                    	if (*s == accept[k])
                    	return (s);
                    	}
        	s++;
        	}
 
return ('\0');
}

