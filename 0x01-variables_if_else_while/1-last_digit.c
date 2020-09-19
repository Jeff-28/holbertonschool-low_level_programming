#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints the last digit of the number stored in the variable.
*Return: value of 0.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char *ld = "Last digit of ";
char *m = "";
char *i = " is ";
char *grt = " and is greater than 5";
char *zer = " and is 0";
char *les = " and is less than 6 and not 0";
int l = n % 10;
if (l > 5)
{
printf("%s", ld);
printf("%d", n);
printf("%s", i);
printf("%d", l);
printf("%s\n", grt);
return (0);
}
if (l == 0)
{
printf("%s", ld);
printf("%d", n);
printf("%s", i);
printf("%d", l);
printf("%s\n", zer);
return (0);
}
if (l < 6)
{
printf("%s", ld);
printf("%d", n);
printf("%s", i);
printf("%d", l);
printf("%s\n", les);
return (0);
}
return (0);
}
