#include <iostream>
#include <cmath>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
int main()
{
  string s;
  cin >> s;
  int max = 0;
  bool tmp = false;
  int h = 0;
  if (s.compare("SSS") == 0)
    h = 0;
  else if (s.compare("SSR") == 0 || s.compare("SRS") == 0 || s.compare("RSS") == 0 || s.compare("RSR") == 0)
    h = 1;
  else if (s.compare("SRR") == 0 || s.compare("RRS") == 0)
    h = 2;
  else if (s.compare("RRR") == 0)
    h = 3;
  cout << h << endl;
}
