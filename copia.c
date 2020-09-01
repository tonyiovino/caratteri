#include <stdio.h>

int main()
{
  int c;

  printf("Dimmi qualcosa: ");

  while ( (c = getchar()) != EOF ) { 
    putchar(c);
  }

  putchar('\n');

  return 0;
}