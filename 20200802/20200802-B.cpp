#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int N, D;
  cin >> N >> D;
  double X[200000];
  double Y[200000];
  int cnt = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
    if (sqrt(X[i] * X[i] + Y[i] * Y[i]) <= D)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
}
