#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int A[100000];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  sort(A, A + N);
  int sum = A[0];
  for (int i = 0; i < N - 1;)
}