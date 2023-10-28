#include "main.h"
/**
 * _strspn - this is the entry point
 * @s: input
 * @accept: takes in the input
 * Return: returns 0
 */
unsigned int _strspn(char *s, char *accept)
{
        	unsigned int n = 0;
        	int r;
 
        	while (*s)
        	{
                    	for (r = 0; accept[r]; r++)
                    	{
                                	if (*s == accept[r])
                                	{
                                            	n++;
                                            	break;
                                	}
                                	else if (accept[r + 1] == '\0')
                                            	return (n);
                    	}
                    	s++;
        	}
        	return (n);
}

