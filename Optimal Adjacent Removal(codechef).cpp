
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string S)
{
	string ans = "";

	for (auto it : S) {

		if (ans.empty() or ans.back() != it)
			ans.push_back(it);

		else if (ans.back() == it)
			ans.pop_back();
	}

	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout << removeDuplicates(s).length()<<endl;
	}
    return 0;
}

