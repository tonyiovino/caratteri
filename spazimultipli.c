/*
  Stato       Input            Output         Nuovo Stato
    NORM      c==' '             c               SPAZIO
              
            

    NORM      c!=' '             c                NORM



    SPAZIO    c!=' '             c                NORM

*/

#include <stdio.h>

int main()
{
  enum Stato { NORM, SPAZIO };

  int stato = NORM;

  int c;

  while ( (c = getchar()) != EOF ) {
    if (stato == SPAZIO) {
      if (c != ' ') {
        putchar(c);
        stato = NORM;
      }
    }

    else if (stato == NORM) {
      if (c == ' ') {
        stato = SPAZIO;
      }
      putchar(c);
    }
  }

  return 0;
}