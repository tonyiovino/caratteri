/*
  Stato       Input            Output         Nuovo Stato
   NORM       c=='/'              -              SLASH

   NORM       c!='/'              c                -


   SLASH      c=='*'              -            COMMENTO

   SLASH      c!='*'            '/'+c            NORM


  COMMENTO    c=='*'              -            ASTERISCO

  COMMENTO    c!='*'              -                -


  ASTERISCO   c=='/'              -              NORM

  ASTERISCO   c!='/'              -             COMMENTO
*/

#include <stdio.h>

int main()
{
  enum Stato { NORM, SLASH, COMMENTO, ASTERISCO };

  int stato = NORM;
  int c;

  while ( (c = getchar()) != EOF ){
    if (stato = NORM){
      if (c == '/'){
        stato = SLASH;
      }
      else {
        putchar(c);
      }
    }

    if (stato = SLASH){
      if (c == '*'){
        stato = COMMENTO;
      }
      else {
        putchar('/');
        putchar(c);
        stato = NORM;
      }
    }

    if (stato = COMMENTO){
      if (c == '*'){
        stato = ASTERISCO;
      }
    }

    if (stato = ASTERISCO){
      if (c == '/'){
        stato = NORM;
      }
      else {
        stato = COMMENTO;
      }
    }

  }

  return 0;
}