#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
int main()
{
  int sum = 0;
  char c;

  while (true)
  {
    cin.get(c);
    if (c == '\n')
    {
      break;
    }
    sum += atoi(&c);
  }

  // for (;;)
  // {
  //   sum += n % 10;
  //   n = n / 10;
  //   if (n == 0)
  //     break;
  // }
  if (sum % 9 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
