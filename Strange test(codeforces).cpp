#include <cstdio>
#include <iostream>
using namespace std;
//a=1
//b=3
int main() {
	int T;
	cin>>T;
	while (T--) {
		int a, b, ans;
		cin>>a>>b;
		for (int i = b;; i++)
			if ((a | i) == i) {
			    ans = i - b + 1; 
				break;
				}
		for (int i = a;; i++)
			if ((i | b) == b) {
			    ans = min(ans, i - a + (i != b)); 
				break;
				}
		cout<<endl<<ans;
	}
	return 0;
}
