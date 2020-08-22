#include <iostream>
#include <math.h>
using namespace std;

int f(int x, int y, int z)
{
  return x * x + y * y + z * z + x * y + y * z + z * x;
}
int main()
{
  int N;
  cin >> N;
  double limit = sqrt(N);
  int cnt;
  for (int n = 1; n <= N; n++)
  {
    cnt = 0;
    for (int i = 1; i < limit; i++)
    {
      if (f(i, 1, 1) > n)
      {
        break;
      }
      for (int j = 1; j < limit; j++)
      {
        if (f(i, j, 1) > n)
        {
          break;
        }
        for (int k = 1; j < limit; k++)
        {
          if (f(i, j, k) == n)
          {
            cnt++;
          }
          if (f(i, j, k) >= n)
          {
            break;
          }
        }
      }
    }
    cout << cnt << '\n';
  }
}