#include "main.h"

/**

 * _strncpy - the intention is to use this to copy a string

 * @dest: input the value

 * @src: input the value

 * @n: input the value

 *

 * Return: dest

 */

char *_strncpy(char *dest, char *src, int n)

{

        	int j;

 

        	j = 0;

        	while (j < n && src[j] != '\0')

        	{

                    	dest[j] = src[j];

                    	j++;

        	}

        	while (j < n)

        	{

                    	dest[j] = '\0';

                    	j++;

        	}

 

        	return (dest);

}
