#include <iostream>
using namespace std;
void tohUtil(int N, char from, char to, char aux)
{
  if (N == 0)
    return;
  tohUtil(N - 1, from, aux, to);
  cout << "Move disk " << N << " from " << from << " to " << to << endl;
  tohUtil(N - 1, aux, to, from);
}
void toh(int N)
{
  tohUtil(N, 'A', 'C', 'B');
}
int main()
{
  int N;
  cin >> N;
  toh(N);
  return 0;
}