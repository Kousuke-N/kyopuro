#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> x;
  vector<int> y;
  vector<char> u;
  int n;
  cin >> n;
  int p, q;
  int c;
  for (int i = 0; i < n; i++)
  {
    cin >> p >> q;
    cin >> c;
    x.push_back(p);
    y.push_back(q);
    u.push_back(c);
  }
  int target;
  int flag = 0;
  int time = 0;
  while (x.size() > 0)
  {
    flag = 0;
    while (flag == 0)
    {
      target = *min_element(x.begin(), x.end());
      if (u[target] == 'L')
      {
        x.erase(x.begin() + target);
        y.erase(y.begin() + target);
        u.erase(u.begin() + target);
        flag = 1;
      }
      target = *max_element(x.begin(), x.end());
      if (u[target] == 'R')
      {
        x.erase(x.begin() + target);
        y.erase(y.begin() + target);
        u.erase(u.begin() + target);
        flag = 1;
      }
      target = *min_element(y.begin(), y.end());
      if (u[target] == 'B')
      {
        x.erase(x.begin() + target);
        y.erase(y.begin() + target);
        u.erase(u.begin() + target);
        flag = 1;
      }
      target = *max_element(y.begin(), y.end());
      if (u[target] == 'U')
      {
        x.erase(x.begin() + target);
        y.erase(y.begin() + target);
        u.erase(u.begin() + target);
        flag = 1;
      }
    }
    time += 10;
    for (int i = 0; i < n; i++)
    {

      if (u[i] == 'L')
      {
        x[i] -= 1;
      }
      else if (u[i] == 'R')
      {
        x[i] += 1;
      }
      else if (u[i] == 'U')
      {
        y[i] += 1;
      }
      else if (u[i] == 'B')
      {
        y[i] -= 1;
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (x[i] == x[j && y[i] == y[j]])
        {
          cout << time << endl;
          return 0;
        }
      }
    }
  }
  cout << "SAFE" << endl;
}