#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{

  char *a = haystack, *b = needle;

  for (;;)
    {

      if (!*b)

	{

	  return (char *) haystack;
	}

      if (!*a)
	{
	  return ('\0');
	}

      if (*a++ != *b++)
	{
	  a = ++haystack;
	  b = needle;
	}
    }
}
