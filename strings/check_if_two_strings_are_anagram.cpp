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

bool isAnagram1(string &a, string &b)
{
  int freq[26] = {0};
  for (char i : a)
    freq[i - 'a']++;
  for (char i : b)
  {
    freq[i - 'a']--;
    if (freq[i - 'a'] < 0)
      return false;
  }
  for (int i = 0; i < 26; i++)
    if (freq[i])
      return false;
  return true;
}

// Using Sorting
bool isAnagram2(string &a, string &b)
{
  int alen = a.length(), blen = b.length();
  if (alen != blen)
    return false;
  sort(all(a));
  sort(all(b));
  return a == b;
}

void checkAnagram(string &a, string &b)
{
  if (isAnagram1(a, b))
  {
    cout << "The strings are anagrams using sorting\n";
  }
  else
  {
    cout << "The strings are not anagrams using sorting\n";
  }
  if (isAnagram2(a, b))
  {
    cout << "The strings are anagrams based on Frequency\n";
  }
  else
  {
    cout << "The strings are not anagrams using sorting\n";
  }
}

int32_t main()
{
  flash;
  string a, b;
  cin >> a >> b;
  checkAnagram(a, b);
  return 0;
}