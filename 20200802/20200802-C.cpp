#include <iostream>
#include <cmath>
using namespace std;
const int MOD = 1000000007;
int main()
{
  int k;
  cin >> k;
  if (k % 2 == 0)
  {
    cout << "-1" << endl;
    return 0;
  }
  int cnt = 1;
  for (long long int i = 7;; i = i * 10 + 7)
  {
    cout << i << ' ' << i % k << endl;
    if (i % k == 0)
    {
      cout << cnt << endl;
      return 0;
    }
    cnt++;
  }
}
