#include <stdio.h>

int stringLength (const char string[]) {
  int i = 0;

  while (string[i] != '\0')
    ++i;

  return i;
}

int removeString ( const char sourceString[], int startIndex, int numberOfCharsToRemove ) {
  int length = stringLength(sourceString);
  int i;
  int r = 0;
  int newArrayLength = length - numberOfCharsToRemove;

  char stringWithStuffRemoved[newArrayLength];
  //
  // for (i = 0; stringWithStuffRemoved[i] != '\0'; ++i) {
  //   printf("%c\n", stringWithStuffRemoved[i]);
  // }

  for (i = 0; sourceString[i] != '\0'; ++i) {
    if (i < startIndex || i > startIndex + numberOfCharsToRemove) {
      stringWithStuffRemoved[r] = sourceString[i];
      ++r;
    }
  }

  printf("%s\n", stringWithStuffRemoved);

  return 0;
}

int main() {
  int removeString ( const char sourceString[], int startIndex, int numberOfCharsToRemove );
  printf("How to Cook for Forty Humans\n");
  removeString( "How to Cook for Forty Humans", 12, 3);
  removeString( "How to Cook for Forty Humans", 16, 5);
  removeString( "How to Cook for Forty Humans", 12, 9);

  return 0;
}