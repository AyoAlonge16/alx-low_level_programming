/* main.h */
#ifndef MAIN_H
#define MAIN_H

/*
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1 and errno set accordingly.
 */
int _putchar(char c);

#endif /* MAIN_H */

/* 0-main.c */
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
