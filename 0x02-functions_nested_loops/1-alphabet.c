#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char c = 'a';
  while(c <= 'z')
    {
      printf("%c" , c);
      c++;
    }
  printf("\n");
  return (0);
}
