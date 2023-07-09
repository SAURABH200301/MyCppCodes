#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,e=0,o=0,atb=-1000,num_odd=0;
		cin>>n;
		unordered_map<char, int> m;
		string s;
		cin>>s;
		if(n==1)cout<<"YES"<<endl;
		else if(n==2&& s[0]!=s[1]) cout<<"YES"<<endl;
		else{
		    sort(s.begin(),s.end());
			for(int i=0;i<n;i++)m[s[i]]+=1;
			for(int i=0;i<n;i++){
				if(m[s[i]]&1==0)
					e++;
				else
					{
					    o++;
					    if(int(s[i])==atb){
					        atb==int(s[i]);
					        num_odd++;
					    }
					}
			}
			if(n%2==0 && o==2 && num_odd==2)
				cout<<"NO"<<endl;
			else if(n%2==0 && o%2==0 && num_odd%2==0)
				cout<<"NO"<<endl;
			else if(n%2==0)
			    cout<<"NO"<<endl;
			else if(n%2!=0 || (o%2==0 && e%2!=0)||(e%2==0 && o%2!=0))
			   cout<<"NO"<<endl;
			else
			   cout<<"YES"<<endl;
		}
	}
	
	return 0;
}
