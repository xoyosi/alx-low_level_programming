#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void); int print_sign(int n)
{
  int n;
  n = print_sign();
  if (n > 0)
{
putchar('+' + n);
return (1);
}
else if (n == 0)
{
putchar('0' + n);
return (0);
}
else
{
putchar('-' + n);
return (-1);
}
}
