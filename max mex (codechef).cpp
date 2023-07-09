#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define MAX INT32_MAX
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ll long long int
#define pb emplace_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define endl '\n'
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b)
{
	ll l = (a * b) / gcd(a, b);
	return l;
}

int main()
{
	ll TC;
	cin >> TC;

	while (TC--)
	{
		vector<int> v(1000000, 0);
		int n, x, k;
		cin >> n >> k;
		fr(i, 0, n)
		{
			cin >> x;
			v[x] = 1;
		}

		fr(i, 0, 1000000)
		{
			if (v[i] == 0)
			{
				if (k != 0)
					k--;
				else
				{
					cout << i << endl;
					break;
				}
			}
		}
	}

	return 0;
}
