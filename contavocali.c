#include <stdio.h>

int main()
{
  int c;

  int count_vocali = 0;

  while ( (c = getchar()) != EOF ) {
    switch(c) {
      case 'A':
      case 'a':

      case 'E':
      case 'e':

      case 'I':
      case 'i':

      case 'O':
      case 'o':

      case 'U':
      case 'u':

        count_vocali++;
        break;
      default:
        break;
    }
  }
  putchar('\n');
  printf("Vocali Inserite: %d\n", count_vocali);
  putchar('\n');

  return 0;
}