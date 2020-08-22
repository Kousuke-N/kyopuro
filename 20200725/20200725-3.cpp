#include <iostream>
using namespace std;
int main()
{
  int n, k;
  int a[200000];
  cin >> n >> k;
  unsigned long long int prev = 1;
  unsigned long long int crr = 1;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (i < k)
    {
      crr *= a[i];
    }
    else
    {
      crr /= a[i - k];
      crr *= a[i];
      if (a[i] > a[i - k])
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    prev = crr;
  }
}