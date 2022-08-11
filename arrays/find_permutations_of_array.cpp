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

void print(vi &A)
{
  for (auto &i : A)
    cout << i << " ";
  cout << endl;
}

void permute(vi &A, int low, int N)
{
  if (low == N)
  {
    print(A);
    return;
  }
  for (int i = low; i < N; i++)
  {
    swap(A[i], A[low]);
    permute(A, low + 1, N);
    swap(A[i], A[low]);
  }
}

void findPermutation(vi &A, int N)
{
  permute(A, 0, N);
}

int32_t main()
{
  flash;

  int N;
  cin >> N;
  vi A(N);
  for (int &i : A)
  {
    cin >> i;
  }
  findPermutation(A, N);
  return 0;
}