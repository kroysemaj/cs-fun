#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
};

struct weirdNums
{
  int monthNumber;
  int yearNumber;
};

int main()
{
  // test data 8/8/2004 - 2/22/2005
  struct date date1;
  struct date date2;
  int diff, n1, n2;

  printf("Gimme a date like this: mm/dd/yyyy \n");

  scanf("%i/%i/%i", &date1.month, &date1.day, &date1.year);

  printf("Gimme another date, same format: mm/dd/yyyy \n");

  scanf("%i/%i/%i", &date2.month, &date2.day, &date2.year);

  n1 = calculateGiantDateNumber(date1);
  n2 = calculateGiantDateNumber(date2);

  diff = n2 - n1;
  printf("There are %d days between your submitted days.\n", diff);
}

int calculateGiantDateNumber(struct date datesToCalc)
{
  int dateNumber = 0;
  // N = (1461 * f(year, month) / 4) + ((153 * g(month)) / 5) + day
  // test formula1 : (1461 * 2004 / 4) + ((153 * 9) / 5) + 8
  // test formula2 : (1461 * 2004 / 4) + ((153 * 15) / 5) + 22

  struct weirdNums weird = calcWeirdNumbers(datesToCalc);

  dateNumber += 1461 * weird.yearNumber / 4; //
  dateNumber += 153 * weird.monthNumber / 5;
  dateNumber += datesToCalc.day;

  return dateNumber;
}

struct calcWeirdNumbers(struct date dateToCalc)
{
  struct weirdNums weirds;
  if (dateToCalc.month <= 2)
  {
    weirds = (struct weirdNums){.yearNumber = dateToCalc.year - 1,
                                .monthNumber = dateToCalc.month + 13};
  }
  else
  {
    weirds = (struct weirdNums){.yearNumber = dateToCalc.year,
                                .monthNumber = dateToCalc.month + 1};
  }
  return weirds;
}