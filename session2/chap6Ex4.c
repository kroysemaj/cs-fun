#include <stdio.h>

int main()
{
  float numbers[10] = { 5, 1.309, 99, -23, 30, 50, 13.9, 45, 93, 283 };

  float total = 0;
  for (int i = 0; i < 10; i++ )
  {
    total += numbers[i];
  }
  float average = total / 10;

  printf("Average: %f\n", average);
}