#include <iostream>
using namespace std;
int main()
{
  int n;
  int a[80];
  cin >> n;
  int stock = 0;
  int money = 1000;
  int max = 0;
  int min = 0;
  int mode = 1;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      money += stock * a[i];
      stock = 0;
    }
    else if (a[i] < a[i + 1])
    {
      stock += money / a[i];
      money %= a[i];
    }
    else
    {
      // do nothing
    }
  }
  money += stock * a[n - 1];
  stock = 0;
  cout << money << endl;
}
