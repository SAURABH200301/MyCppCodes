#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n - 2; i++)
  {
    if (__gcd(arr[i], arr[i + 2]) > __gcd(arr[i], arr[i + 1]))
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
