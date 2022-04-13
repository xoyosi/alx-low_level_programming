#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void); void print_alphabet_x10(void)
{
int count = 0;
char c;
while (count++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}
}
