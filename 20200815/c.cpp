#include <iostream>
#include <cmath>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
int main()
{
  long long int x, k, d;
  cin >> x >> k >> d;

  long long int tmp = x / d;
  if (abs(tmp) > abs(k))
  {
    if (x < 0)
    {
      x += d * k;
    }
    else
    {
      x -= d * k;
    }
  }
  else
  {
    k -= abs(tmp);
    if (k % 2 == 1)
    {
      if (x < 0)
      {
        x += d * (abs(tmp) + 1);
      }
      else
      {
        x -= d * (abs(tmp) + 1);
      }
    }
    else
    {
      if (x < 0)
      {
        x += d * (abs(tmp));
      }
      else
      {
        x -= d * (abs(tmp));
      }
    }
  }
  cout << abs(x) << endl;
}
