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
  int l[100];
  int max, a, b;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
  }
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (l[i] == l[j] || l[j] == l[k] || l[k] == l[i])
        {
          continue;
        }
        if (l[i] > l[j])
        {
          max = l[i];
          a = l[j];
        }
        else
        {
          max = l[j];
          a = l[i];
        }
        if (max > l[k])
        {
          b = l[k];
        }
        else
        {
          b = max;
          max = l[k];
        }

        if (max < a + b)
        {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}
