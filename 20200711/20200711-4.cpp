#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

int bit2int(string s)
{
  int l = (int)(s.length());
  int c = 0;
  for (int i = 0; i < l; i++)
  {
    if (s[i] == '0')
    {
      c *= 2;
    }
    else
    {
      c = c * 2 + 1;
    }
  }
  return c;
}
string int2bit(int n, int k)
{
  string s = "";
  for (; n > 0;)
  {
    if (n % 2 == 1)
    {
      s = "1" + s;
    }
    else
    {
      s = "0" + s;
    }
    n /= 2;
  }
  string s2 = "";
  for (int i = 0; i < k - (int)(s.length()); i++)
  {
    s2 += "0";
  }
  return s2 + s;
}
int popcount(string s)
{
  int l = (int)(s.length());
  int cnt = 0;
  for (int i = 0; i < l; i++)
  {
    if (s[i] == '1')
    {
      cnt++;
    }
  }
  return cnt;
}

int main()
{
  int N;
  cin >> N;
  string s;
  cin >> s;
  int pc[1 ^ 200001] = {-1};
  int cnt = 0;
  int n = 0;
  for (int i = 0; i < N; i++)
  {
    // 先頭からi文字目を反転
    cnt = 0;
    string s2 = s;
    s2[i] = s2[i] == '0' ? '1' : '0';
    while (1)
    {
      n = bit2int(s2);
      int pc_result = popcount(s2);
      cout << pc_result % n << endl;
      cnt++;
      s2 = int2bit(pc_result % n, N);
      if (pc_result == 0)
        break;
    }
  }
}