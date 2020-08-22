#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
bool is_integer(double x)
{
  return floor(x) == ceil(x);
}
class Move
{
public:
  int w;
  int h;
  int warp;
};
int main()
{
  int h, w;
  int ch, cw, dh, dw;
  char s[1001][1001] = {'#'};
  cin >> h >> w >> ch >> cw >> dh >> dw;
  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      cin >> s[i][j];
    }
  }
  queue<Move> walk_que;
  queue<Move> warp_que;
  Move *p_start = new Move();
  p_start->h = ch;
  p_start->w = cw;
  p_start->warp = 0;
  warp_que.push(*p_start);
  // スタート地点から行けるマス
  while (!warp_que.empty())
  {
    Move warp = warp_que.front();
    warp_que.pop();
    walk_que.push(warp);
    if (s[warp.h][warp.w] == '*')
    {
      continue;
    }
    while (!walk_que.empty())
    {
      Move walk = walk_que.front();
      walk_que.pop();
      int aw = walk.w;
      int ah = walk.h;
      int awarp = walk.warp;
      if (s[ah][aw] == '*')
      {
        continue;
      }
      if (ah == dh && aw == dw)
      {
        cout << awarp << endl;
        return 0;
      }
      s[ah][aw] = '*';
      // cout << aw << ' ' << ah << ' ' << awarp << endl;
      for (int i = -2; i <= 2; i++)
      {
        for (int j = -2; j <= 2; j++)
        {
          if (i == 0 && j == 0)
            continue;
          if (i * i + j * j == 1)
          {
            if (s[ah + i][aw + j] == '.')
            {
              Move *tmp = new Move();
              tmp->h = ah + i;
              tmp->w = aw + j;
              tmp->warp = awarp;
              walk_que.push(*tmp);
            }
          }
          else
          {
            if (s[ah + i][aw + j] == '.')
            {
              Move *tmp = new Move();
              tmp->h = ah + i;
              tmp->w = aw + j;
              tmp->warp = awarp + 1;
              warp_que.push(*tmp);
            }
          }
        }
      }
    }
  }
  cout << -1 << endl;
}
