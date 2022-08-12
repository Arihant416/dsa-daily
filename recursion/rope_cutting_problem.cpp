/*
Author : Arihant Jain
github:https://github.com/Arihant416
linkedin : https://www.linkedin.com/in/arihant416
Problem Statement : Given a rod of length N meters, and the rod can be cut in only 3 sizes A, B and C. The task is to maximizes the number of cuts in rod. If it is impossible to make cut then print -1.
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

int findMaxCut(int N, int A, int B, int C)
{
  if (N == 0)
    return 0;
  if (N < 0)
    return -1;
  int cutFromA = findMaxCut(N - A, A, B, C);
  int cutFromB = findMaxCut(N - B, A, B, C);
  int cutFromC = findMaxCut(N - C, A, B, C);
  int res = max(cutFromA, max(cutFromB, cutFromC));
  if (res == -1)
    return -1;
  return 1 + res;
}

int32_t main()
{
  flash;
  int N;
  cin >> N;
  int A, B, C;
  cin >> A >> B >> C;
  cout << findMaxCut(N, A, B, C);
  return 0;
}