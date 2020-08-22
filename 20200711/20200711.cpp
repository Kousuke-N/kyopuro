#include <iostream>
using namespace std;

int main()
{
  int L;
  int R;
  int d;

  cin >> L >> R >> d;
  int h = R / d;
  int i = L / d + 1;

  cout << R / d - (L - 1) / d << '\n';
}