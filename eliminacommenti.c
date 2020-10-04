/*
  Stato       Input            Output         Nuovo Stato
   NORM       c=='/'              -              SLASH

   NORM       c!='/'              c                -

   NORM       c=='"'              c             STRINGA


  STRINGA     c=='"'              c              NORM

  STRINGA     c!='"'              c                -


   SLASH      c=='*'              -            COMMENTO

   SLASH      c!='*'            '/'+c              -


  COMMENTO    c=='*'              -            ASTERISCO

  COMMENTO    c!='*'              -                -


  ASTERISCO   c=='/'              -              NORM

  ASTERISCO   c!='/'              -             COMMENTO
*/

#include <stdio.h>

int main()
{
  enum Stato { NORM, SLASH, COMMENTO, ASTERISCO, STRINGA };

  int stato = NORM;
  int c;

  while ( (c = getchar()) != EOF ){
    if (stato == NORM){
      if (c == '/'){
        stato = SLASH;
      }
      else if (c == '"'){
        putchar(c);
        stato = STRINGA;
      }
      else {
        putchar(c);
      }
    }

    else if (stato == STRINGA){
      if (c == '"'){
        putchar(c);
        stato = NORM;
      }
      else {
        putchar(c);
      }
    }

    else if (stato == SLASH){
      if (c == '*'){
        stato = COMMENTO;
      }
      else {
        putchar('/');
        putchar(c);
        stato = NORM;
      }
    }

    else if (stato == COMMENTO){
      if (c == '*'){
        stato = ASTERISCO;
      }
    }

    else if (stato == ASTERISCO){
      if (c == '/'){
        stato = NORM;
      }
      else {
        stato = COMMENTO;
      }
    }

  }
  putchar('\n');

  return 0;
}