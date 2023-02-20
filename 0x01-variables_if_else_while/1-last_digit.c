#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A C program that generates a random number and prints its last digit
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int Last_digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX \2;
if (Last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
}
{
else if ((n % 10) > 6 && (n % 10) Last_digit == 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit.);
}
else
{
printf("Last digit of %d is %d and  is 0\n", n, n % 10);
}
return (0)
}
