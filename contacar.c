#include <stdio.h>

int main()
{
  int c;
  int count;

  while ( (c = getchar()) != EOF ) { 
    putchar(c);
    count++;
  }
  putchar('\n');
  putchar('\n');
  printf("Caratteri Inseriti: %d", count);
  putchar('\n');

  return 0;
}