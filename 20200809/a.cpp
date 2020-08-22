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
  cin >> n;
  long double tmp[200000];
  int a[200000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (is_integer(a[i] * a[j]))
      {
        cout << a[i] << ',' << a[j] << '=' << a[i] * a[j] << endl;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
