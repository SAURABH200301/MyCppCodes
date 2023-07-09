#include<iostream>
#include<queue>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	queue<int> q;
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			q.push(i);
		}
		int i=1;
		while(!q.empty())
		{
		   if(i%2!=0)
		   {
		   	    q.pop();
		   }
		   else
		   {
		   	  int a=q.front();
				 q.pop();
		   	     q.push(a);
		   	  if(q.size()==1)
		   	  {
		   	  	int a=q.back();
				 q.pop();
		   	  	cout<<a<<"\n";
				 }
		   	  
		   }
		   i++;	
		}
		t--;
	}
	return 0;
}
