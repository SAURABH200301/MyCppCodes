#include <bits/stdc++.h>
using namespace std;
int getMinSquares(unsigned int n)
{
	if (sqrt(n) - floor(sqrt(n)) == 0)
		return 1;
	if (n <= 3)
		return n;
	int res = n;

	for (int x = 1; x <= n; x++)
	{
		int temp = x * x;
		if (temp > n)
			break;
		else
			res = min(res, 1 + getMinSquares(n - temp));
	}
	return res;
}

// Driver code
int main()
{
	int n;cin>>n;
	cout << getMinSquares(n);
	return 0;
}

