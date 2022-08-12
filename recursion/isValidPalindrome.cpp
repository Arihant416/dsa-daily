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

bool isPalindrome(string &s, int low, int high)
{
  if (low >= high)
    return true;
  return s[low] == s[high] && isPalindrome(s, low + 1, high - 1);
}

void validateIsPalindrome(string &s)
{
  if (isPalindrome(s, 0, s.size() - 1))
  {
    cout << "String is a palindrome";
  }
  else
  {
    cout << "String is not a palindrome";
  }
}

int32_t main()
{
  flash;
  string s;
  cin >> s;
  validateIsPalindrome(s);
  return 0;
}