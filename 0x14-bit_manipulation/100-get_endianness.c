#include "main.h"
/**
 * get_endianness - identifies whether a machine uses little or big endian byte ordering
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int j = 1;
char *c = (char *) &j;
return (*c);
}
