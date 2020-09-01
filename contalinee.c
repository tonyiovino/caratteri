#include <stdio.h>

int main()
{
  int c;
  int count = 0;

  while ( (c = getchar()) != EOF ) { 
    if (c == '\n') {
      count++;
    }
  }
  putchar('\n');
  putchar('\n');
  printf("New line Inserite: %d\n", count);

  return 0;
}