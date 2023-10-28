#include "main.h"
                    	
/**
 * _isalpha - this checks for alphabetical error
 * @c: this is the charater to be checked
 * Return: return 1 if c is a letter, and 0 otherwise
 */
int _isalpha(int c)
{
        	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

