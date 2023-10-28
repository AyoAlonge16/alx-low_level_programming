#include "main.h"

/**

 *_memcpy - this is a function used to copy memory

 *@dest: memory location 

 *@src: copied memory location 

 *@n: the size in bytes

 *

 *Return: the return memory will be copied with n bytes changed

 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

        	int r = 0;

        	int i = n;

 

        	for (; r < i; r++)

        	{

                    	dest[r] = src[r];

                    	n--;

        	}

        	return (dest);

}

