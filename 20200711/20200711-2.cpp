#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int cnt = 0;
  for (int i = 1; i <= N; i++)
  {
    int a;
    cin >> a;
    if (i % 2 == 1)
    {
      if (a % 2 == 1)
      {
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
}