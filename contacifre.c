
#include <stdio.h>

int main()
{
  int c, i;

  int count_spazi = 0, count_car = 0;

  int num[10];

  for (i = 0; i < 10; i++) {
    num[i] = 0;
  }

  while ( (c = getchar()) != EOF ) {

    putchar(c);

    if (c == ' ') {
      count_spazi++;
    }

    if (c >= '0' && c <= '9') {
      num[c-'0']++;
    }

    count_car++;
  }

  putchar('\n');
  for (i = 0; i < 10; i++) {
    printf("Numero: %d\nVolte: %d\n\n", i, num[i]);
  }
  putchar('\n');
  printf("Spazi Inseriti: %d\n", count_spazi);
  printf("Caratteri Inseriti: %d\n", count_car);
  putchar('\n');

  return 0;
}