#include <iostream>
using namespace std;
int findSumOfDigits(int N)
{
  if (N < 10)
    return N;
  return N % 10 + findSumOfDigits(N / 10);
}
int main()
{
  int N;
  cin >> N;
  cout << findSumOfDigits(N) << endl;
}