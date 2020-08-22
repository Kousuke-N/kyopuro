#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int k;
  cin >> k;
  while (b <= a)
  {
    b *= 2;
    k--;
  }
  while (c <= b)
  {
    c *= 2;
    k--;
  }
  if (k < 0)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}