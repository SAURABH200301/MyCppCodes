#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
typedef vector<int> vi; 
typedef pair<int, int> pii; 
typedef vector<pair<int, int> > vpii; 
typedef long long ll;
template<typename T, typename U> static void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }

int main() {
    int n1; int n2; int n3;
    while(~scanf("%d%d%d", &n1, &n2, &n3)) {
        vector<int> a(n1);
        for(int i = 0; i < n1; ++ i)
            scanf("%d", &a[i]);
        vector<int> b(n2);
        for(int i = 0; i < n2; ++ i)
            scanf("%d", &b[i]);
        vector<int> c(n3);
        for(int i = 0; i < n3; ++ i)
            scanf("%d", &c[i]);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());
        map<int, int> t;
        rep(k, 3) {
            const vi &v = k == 0 ? a : k == 1 ? b : c;
            int sum = 0;
            for(int x : v) {
                sum += x;
                ++ t[sum];
            }
        }
        int ans = 0;
        for(auto p : t) if(p.second == 3)
            amax(ans, p.first);
        printf("%d\n", ans);
    }
    return 0;
}


//#include<bits/stdc++.h>
//#define ll long long
//using namespace std;
//void equalStack(vector<int>v1,vector<int>v2 ,vector<int> v3,int n)
//{
//	if(n==1)
//	{
//		for(int i=0;i<v1.size();i++)
//		{
//			if(find(v2.begin(),v2.end(),v1[i])&&find(v3.begin(),v3.end(),v1[i]))
//			  {
//			  	cout<<v1[i]<<endl;
//			  	break;
//			  }
//		}
//	}
//	else if(n==2){
//		for(int i=0;i<v2.size();i++)
//		{
//			if(find(v1.begin(),v1.end(),v2[i])&&find(v3.begin(),v3.end(),v2[i]))
//			  {
//			  	cout<<v2[i]<<endl;
//			  	break;
//			  }
//		}
//	}
//	else{
//		for(int i=0;i<v3.size();i++)
//		{
//			if(find(v2.begin(),v2.end(),v3[i])&&find(v1.begin(),v1.end(),v3[i]))
//			  {
//			  	cout<<v3[i]<<endl;
//			  	break;
//			  }
//		}
//	}
//}
//int main()
//{
//	ll n1,n2,n3;
//	cin>>n1>>n2>>n3;
//	vector<int> v1(n1),v2(n2),v3(n3);
//	for(int i=0;i<n1;i++)
//	  cin>>v1[i];
//	for(int i=0;i<n2;i++)
//	  cin>>v2[i];
//	for(int i=0;i<n3;i++)
//	  cin>>v3[i];
//	reverse(v1.begin(),v1.end());
//	reverse(v2.begin(),v2.end());
//	reverse(v3.begin(),v3.end());
//	for(int i=1;i<n1;i++)
//	{
//		v1[i]+=v1[i-1];
//	}
//	for(int i=1;i<n2;i++)
//	{
//		v2[i]+=v2[i-1];
//	}
//	for(int i=1;i<n3;i++)
//	{
//		v3[i]+=v3[i-1];
//	}
//	reverse(v1.begin(),v1.end());
//	reverse(v2.begin(),v2.end());
//	reverse(v3.begin(),v3.end());
//    if(v1.size()<v2.size()&&v1.size()<v3.size())
//    {
//    	equalStack(v1,v2,v3,1);
//	}
//	else if(v2.size()<v3.size())
//	    equalStack(v1,v2,v3,2);
//	else
//	    equalStack(v1,v2,v3,3);
//    
//	return 0;
//}
