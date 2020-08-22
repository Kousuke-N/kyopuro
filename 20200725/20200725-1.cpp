#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int c;
  if (400 <= x && x < 600)
  {
    c = 8;
  }
  else if (600 <= x && x < 800)
  {
    c = 7;
  }
  else if (800 <= x && x < 1000)
  {
    c = 6;
  }
  else if (1000 <= x && x < 1200)
  {
    c = 5;
  }
  else if (1200 <= x && x < 1400)
  {
    c = 4;
  }
  else if (1400 <= x && x < 1600)
  {
    c = 3;
  }
  else if (1600 <= x && x < 1800)
  {
    c = 2;
  }
  else if (1800 <= x && x < 2000)
  {
    c = 1;
  }
  cout << c << endl;
}