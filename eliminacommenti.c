/*
  Stato       Input            Output         Nuovo Stato
   NORM       c=='/'              -              SLASH

   NORM       c!='/'              c                -

   NORM       c=='"'              c             STRINGA

   NORM       c=='''              c              APICE


  STRINGA     c=='"'              c              NORM

  STRINGA     c!='"'              c                -

  STRINGA     c=='\'              c                -


   APICE      c=='''              c              NORM

   APICE      c=='\'              c                -


   SLASH      c=='*'              -             COMMENTO

   SLASH      c!='*'           '/'+ c              -


  COMMENTO    c=='*'              -            ASTERISCO

  COMMENTO    c!='*'              -                -


  ASTERISCO   c=='/'              -              NORM

  ASTERISCO   c!='/'              -             COMMENTO
*/

#include <stdio.h>

int main()
{
  enum Stato { NORM, SLASH, COMMENTO, ASTERISCO, STRINGA, BACKSLASH, APICE };

  int stato = NORM;
  int c;

  while ( (c = getchar()) != EOF ){

    /*NORM*/
    if (stato == NORM){
      if (c == '/'){
        stato = SLASH;
      }
      else if (c == '"'){
        putchar(c);
        stato = STRINGA;
      }
      else if (c == '\''){
        putchar(c);
        stato = APICE;
      }
      else {
        putchar(c);
      }
    }

    /*APICE*/
    if (stato == APICE){
      if (c == '\''){
        putchar(c);
        stato = NORM;
      }
      else if (c == '\\'){
        c = getchar();
        putchar(c);
      }
      else {
        putchar(c);
      }
    }

    /*STRINGA*/
    else if (stato == STRINGA){
      if (c == '\"'){
        putchar(c);
        stato = NORM;
      }
      else if (c == '\\'){
        c = getchar();
        putchar(c);
      }
      else {
        putchar(c);
      }
    }

    /*SLASH*/
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

    /*COMMENTO*/
    else if (stato == COMMENTO){
      if (c == '*'){
        stato = ASTERISCO;
      }
    }

    /*ASTERISCO*/
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