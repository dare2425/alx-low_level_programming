#include "main.h"

/**
* _test - checks for lower case characters
* @i: ascii value
* Return: 1 for lowercase
*/
int test(int i)
  int j;
{
for (i = 0 ; i <= 23; i++)
  for (j=0 ; j <= 59; j++)
    putchar ('0' + i);
putchar (':');
putchar ('0' + j);
}
