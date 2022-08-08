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

void reverseInGroupsOfK(vi &A, int N, int K)
{
  for (int i = 0; i < N; i += K)
  {
    int low = i, high = min(N - 1, i + K - 1);
    while (low < high)
    {
      swap(A[low++], A[high--]);
    }
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

  int N, K;
  cin >> N;
  vi A(N);
  for (int &i : A)
    cin >> i;
  cin >> K;
  reverseInGroupsOfK(A, N, K);
  print(A);
  return 0;
}