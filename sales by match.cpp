// 6 5 2 3 5 2 2 1 1 5 1 3 3 3 5
// 6 5 2 3 5 2 2 1 1 5 1 3 3 3 5
//4 5 5 5 6 6 4 1 4 4 3 6 6 3 6 1 4 5 5 5
#include<bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> ar) {
      map<int,int> m;
      for(int i=0;i<ar.size();i++)
      {
          if(m.empty())
          {
              pair<int,int> p;
              p.first=ar[i];
              p.second=1;
              m.insert(p);
              continue;
          }
          map<int, int>::iterator it ;
          it=m.find(ar[i]);
          if(it==m.end())
          {
              pair<int,int> p;
              p.first=ar[i];
              p.second=1;
              m.insert(p);
              
          }
          else{
              
              m[ar[i]]++;
          }
      }
      int count=0;
      for(auto i: m)
      {
         
          count+=(i.second/2);
      }
      return count;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		v.push_back(h);
	}
	int count=sockMerchant(n,v);
	cout<<count<<endl;
	return 0;
}
