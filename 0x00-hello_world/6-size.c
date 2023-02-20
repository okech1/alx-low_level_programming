#include <stdio.h>
/**
* main - A program that prints the size of various types on the computer
* Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %ld byte(s)\n"
"Size of an int: %ld byte(s)\n"
"Size of a long int: %ld byte(s)\n"
"Size of a long long int: %ld byte(s)\n"
"Size of a float: %ld byte(s)\n",
sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int),
sizeof(float));
return (0);
}
