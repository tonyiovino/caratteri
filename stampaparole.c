#include <stdio.h>

int main()
{
  int c;

  while ( (c = getchar()) != EOF ) {
    if (c != ' ' || c != '\n') {
      putchar(c);
    }
    else {
        putchar('\n');
    }
  }


  return 0;
}