#include <stdio.h>

int main()
{
  int c;

  int count_spazi = 0, count_tab = 0, count_newline = 0;

  while ( (c = getchar()) != EOF ) {

    if (c == ' ') {
      count_spazi++;
    }

    if (c == '\t') {
      count_tab++;
    }

    if (c == '\n') {
      count_newline++;
    }
  }
  putchar('\n');
  printf("Spazi Inseriti: %d\n", count_spazi);
  printf("Tabulazioni Inserite: %d\n", count_tab);
  printf("New line Inserite: %d\n", count_newline);
  putchar('\n');

  return 0;
}