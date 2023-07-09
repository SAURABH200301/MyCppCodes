#include<iostream>
#include<vector>
using namespace std;
bool isequal(vector<int> b,int l)
{
	bool t=true;
	for(int i=1;i<l;i++)
	{
		while(b[i]!=b[i-1])
		{
			t=false;return t;
		}
	}
	return t;
}
void number_of_steps(vector<int> a,vector<int> b,int n)
{
	int steps=0;int  min=a[0];
	  while(!isequal(a,n))
	  {
	  	
	        for(int i=0;i<n;i++)
	       {
	  	        while(min<a[i])
	  	        {
	  		    a[i]-=b[i];
	  		    steps++;
	  		    if(a[i]<0)
	  		      {
	  		    	cout<<"-1"<<endl;
	  		    	return ;
				  }
		        }
		        if(min>a[i])
		          min=a[i];
	        }
	  }
	  if(isequal(a,n))
	  cout<<steps<<endl;
	  else
	  cout<<"-1"<<endl;
	  
}
int main()
{
	int n;
	cin>>n;
	vector<int> a,b;
	for(int i=0;i<n;i++)
	  {
	  	int j;
	  	cin>>j;
	  	a.push_back(j);
	  }
	  for(int i=0;i<n;i++)
	  {
	  	int j;
	  	cin>>j;
	  	b.push_back(j);
	  }
	  
	  number_of_steps(a,b,n);
	  
	  
	  return 0;
}

