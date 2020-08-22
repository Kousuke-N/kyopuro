#include <iostream>
#include <cmath>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
int main()
{
  int n;
  int a[200000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      sum += a[i] - a[i + 1];
      a[i + 1] = a[i];
    }
  }

  cout << sum << endl;
}
