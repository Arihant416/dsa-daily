/*
Author : Arihant Jain
github:https://github.com/Arihant416
linkedin : https://www.linkedin.com/in/arihant416
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned ll
#define PB push_back
#define MP make_pair
#define flash ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define vi vector<int>
#define vl vector<ll>
#define vll vector<ull>
#define mpi map<int, int>
#define mpl map<ll, ll>
#define mpll map<ull, ull>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define all(a) begin(a), end(a)
#define maxEl(a) *max_element(all(a))
#define minEl(a) *min_element(all(a))
#define uimap unordered_map<int, int>
#define ulmap unordered_map<ll, ll>
#define mppii map<pi, int>

void rearrangeAlternatively(vi &A, int N)
{
  int maxel = A[N - 1] + 1;
  int front = 0, back = N - 1;
  bool flag = true;
  for (int i = 0; i < N; i++)
  {
    if (flag)
    {
      int val = A[back--] % maxel;
      A[i] += (val * maxel);
    }
    else
    {
      int val = A[front++] % maxel;
      A[i] += (val * maxel);
    }
    flag = !flag;
  }
  for (int i = 0; i < N; i++)
  {
    A[i] /= maxel;
  }
}
void print(vi &A)
{
  for (auto &i : A)
    cout << i << " ";
  cout << endl;
}

int32_t main()
{
  flash;
  int N;
  cin >> N;
  vi A(N);
  for (auto &i : A)
    cin >> i;
  rearrangeAlternatively(A, N);
  print(A);
  return 0;
}