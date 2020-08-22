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
    if (max < a[i])
    {
      max = a[i];
    }
    if (min > a[i])
    {
      min = a[i];
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (mode == 1 && i < n - 1 && a[i] > a[i + 1])
    {
      continue;
    }
    else
    {
      stock = money / a[i];
      money %= a[i];
      mode = 0;
    }
    if (mode == 0 && i < n - 1 && a[i] < a[i + 1])
    {
      continue;
    }
    else
    {
      money += stock * a[i];
      stock = 0;
      mode = 0;
    }
  }
  cout << money << endl;
}