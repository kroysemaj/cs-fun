#include <stdio.h>
int main(void)
{
  int num, backwards = 0, digit, backupzeros = 0;

  printf("Enter an integer ");
  scanf("%i", &num); // get the number

  while (num > 0)
  {
    digit = num % 10; // pry off the last digit
    num /= 10;        // take off the digit

    if ((backwards == 0) && (digit == 0)) // If it's a number that ends in 0
      backupzeros++;                      // save it, we'll use that later

    backwards = (backwards * 10) + digit; // glue it on backwards
  }

  // Now we have the number reversed. Next we need to print the digits

  while (backwards > 0)
  {
    digit = backwards % 10;
    backwards /= 10;

    switch (digit)
    {

    case 1:
      printf("one ");
      break;
    case 2:
      printf("two ");
      break;
    case 3:
      printf("three ");
      break;
    case 4:
      printf("four ");
      break;
    case 5:
      printf("five ");
      break;
    case 6:
      printf("six ");
      break;
    case 7:
      printf("seven ");
      break;
    case 8:
      printf("eight ");
      break;
    case 9:
      printf("nine ");
      break;
    default:
      printf("zero ");
      break;
    }
  }

  while (backupzeros > 0)
  {
    printf("zero ");
    backupzeros--;
  }

  return 0;
}