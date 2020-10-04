/*
  Stato       Input            Output         Nuovo Stato
   NORM       c=='/'              -              SLASH

   NORM       c!='/'              c               -


   SLASH      c=='*'              -            COMMENTO

   SLASH      c!='*'              c              NORM


  COMMENTO    c=='*'              -            ASTERISCO

  COMMENTO    c!='*'              -                -


  ASTERISCO   c=='/'              -              NORM

  ASTERISCO   c!='/'              -             COMMENTO
*/