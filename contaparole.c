/*
  Stato       Input            Output         Nuovo Stato
    DENTRO   c==' '    \
              oppure    - - > count_parole++       FUORI
             c=='\n'   /

    DENTRO   c!=' '    \
                e       - - >   Nulla             DENTRO
             c!='\n'   /

    FUORI    c!=' '    \
                e       - - >   Nulla             DENTRO
             c!='\n'   /
*/

#include <stdio.h>

int main()
{
  enum Stato { DENTRO, FUORI };
  int stato = DENTRO;

  int c;

  int count_caratteri = 0;
  int count_newline = 0;
  int count_parole = 0;

  while ( (c = getchar()) != EOF ) {
    count_caratteri++;

    if (c == '\n'){
      count_newline++;
    }

    if (stato == DENTRO) {
      if (c == ' ' || c == '\n') {
        stato = FUORI;
        count_parole++;
      }
    }
    else if (stato == FUORI) {
      if (c == ' ' || c == '\n')
        /*Operazione Nulla*/;
      else {
        stato = DENTRO;
      }
    }
  }

  printf("Caratteri: %d\n", count_caratteri);
  printf("Righe: %d\n", count_newline);
  printf("Parole lette: %d\n", count_parole);

  return 0;
}