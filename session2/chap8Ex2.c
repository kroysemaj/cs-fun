#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
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

int calculateGiantDateNumber(struct date date)
{
  int dateNumber=0, monthNumber=0, yearNumber=0;
  // N = (1461 * f(year, month) / 4) + ((153 * g(month)) / 5) + day
  // test formula1 : (1461 * 2004 / 4) + ((153 * 9) / 5) + 8
  // test formula2 : (1461 * 2004 / 4) + ((153 * 15) / 5) + 22
  yearNumber = calcYearNumber(date.year, date.month);
  monthNumber = calcMonthNumber(date.month);

  dateNumber += 1461 * calcYearNumber(date.year, date.month) / 4; // 
  dateNumber += 153 * calcMonthNumber(date.month) / 5; 
  dateNumber += date.day;
  
  return dateNumber;
}

// f = month <= 2 ? year - 1 : year
int calcYearNumber(int year, int month)
{
  if(month <= 2)
  {
    return year - 1; 
  }
  else 
  {
    return year;
  }
}

// g = month <= 2 ? month + 13 : month + 1
int calcMonthNumber(int month)
{
  if (month <= 2) 
  {
    return month + 13;
  }
  else
  {
    return month + 1;
  }
}
