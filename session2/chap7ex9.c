#include <stdio.h>

int main()
{
  int a=15, b=10;
  printf("lcm(%d, %d) is %d\n", a, b, lcm(a, b));
}

int lcm(int u, int v){
  if (u >= 0 || v >= 0)
  {
    return u * v / gcd(u, v);
  }
  return -1;
}

int gcd(int a, int b)
{
  int c;
  while (a != 0)
  {
    c = a;
    a = b % a;
    b = c;
  }
  return b;
}

