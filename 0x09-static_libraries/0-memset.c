#include "main.h"



/**


* _memset - this is used to fill the memory with specific values


* @s: this starts the address of the memory that will be filled


* @b: the value we really need


* @n: and number or sum of bytes that needs to be changed 


*


* Return: a change in file to a new array


*/


char *_memset(char *s, char b, unsigned int n)


{


  	int a = 0;


 


  	for (; n > 0; a++)


  	{


          	s[a] = b;


          	n--;


  	}


  	return (s);


}
