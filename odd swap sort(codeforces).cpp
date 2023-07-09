#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,a,i,o=0,e=0;
	bool f=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a&1)
		{
			if(a<o)f=0;
			o=a;
		}
		else
		{
			if(a<e)f=0;
			e=a;
		}
	}
	if(f)cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
		solve();
}

//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--){
//		ll n;
//		cin>>n;
//		ll arr[n];
//		for(int i=0;i<n;i++)
//		  cin>>arr[i];
//		for(int i=1;i<n;i++)
//		{
//			if((arr[i-1]>arr[i]) && (arr[i-1]+arr[i])%2!=0)
//			 {
//			 	ll k=arr[i-1];
//			 	arr[i-1]=arr[i];
//			 	arr[i]=k;
//			 }
//		}
//		if(is_sorted(arr,arr+n))
//		  cout<<"Yes"<<endl;
//		else
//		  cout<<"No"<<endl;
//
//	}
//	return 0;
//}
