#include <iostream>
#include <cmath>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
int main()
{
  int n, x, t;
  cin >> n >> x >> t;
  for (int i = 0;; i++)
  {
    if (i * x >= n)
    {
      cout << i * t << endl;
      break;
    }
  }
}
