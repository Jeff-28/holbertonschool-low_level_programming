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
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;


l = n % 10;

if (l == 0)
{
printf("Last digit of %d is 0 and is 0\n", n);

}

if (l > 5)
{
printf("Last digit of %d is %d and is grater than 5\n", n, l);
}



if (l < 6 && l != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

}

return (0);
}
