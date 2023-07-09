#include<bits/stdc++.h>
using namespace std;
int s[200005];
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>s[i];
		for(int i=2;i<=n-1;i++)
			if(s[i]>s[i-1]&&s[i]>s[i+1])s[i+1]=max(s[i],s[i+2]),ans++;
		cout<<ans<<endl;
		for(int i=1;i<=n;i++)cout<<s[i]<<" ";
		cout<<endl;
	}
}
