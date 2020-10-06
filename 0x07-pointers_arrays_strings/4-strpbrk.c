#include "holberton.h"

/**
 * _strpbrk - function locates the first occurrence in the string @s of any of the bytes in the string @accept.
 * @s: string variable.
 * @accept: string variable.
 * Return: the resulting string after the search.
 */

char *_strpbrk(char *s, char *accept)
{

int a, b, c, d = 0;

for (a = 0; s[a] != '\0'; a++)
  c = a;

for (a = 0; accept[a] != '\0'; a++)
  {

for (b = 0; s[b] != '\0'; b++)
  {

    if (accept[a] == s[b])
      {
	if (b <= c)
	  {
	    c = b;
	    d = 1;
	  }
      }
  }
  }

 if (d == 1)
   {
     return (&s[c]);
       }

 else
   {
     return ('\0');

   }
}
