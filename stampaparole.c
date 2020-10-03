/*
  Stato       Input            Output        Nuovo Stato
    DENTRO   c==' '    \
              oppure    - - >   '\n'            DENTRO
             c=='\n'   /

    DENTRO   c!=' '    \
                e       - - >     c               -
             c!='\n'   /
*/

#include <stdio.h>

int main()
{
  int c;

  while ( (c = getchar()) != EOF ) {
    if (c == ' ' || c == '\n') {
      putchar('\n');
    }
    else {
      putchar(c);
    }
  }

  return 0;
}