#include "main.h"

/**
  * _strlen_recursion - A function that returns the length of a string
  * @s: string whose length is to be determined
  *
  * Return: Always 1 (success)
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
  * _palindrome_checker - checks to see if a string is a palindrome
  * @i: left hand index incrementor
  * @j: right hand index decrementor
  * @p: possible palindrome
  *
  * Return: 1 if palindrome and 0 if not
  */

int _palindrome_checker(int i, int j, char *p)
{
	if (i < j && p[i] == p[j])
	{
		return (_palindrome_checker((i + 1), (j - 1), p));
	}
	else if (p[i] != p[j])
	return (0);
	else
	return (1);
}

/**
  * is_palindrome - states if a string is a palindrome
  * @s: string to check
  *
  * Return: 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s) - 1; /* strlen index will start from 0 to len - 1 */
return (_palindrome_checker(0, len, s));
}
