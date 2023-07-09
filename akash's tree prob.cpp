#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int A,int B[][2],vector<int> &C)
{
    vector<int> ar;
    for(int k=1;k<A;k++)
    {
    int min=INT_MAX,max=INT_MIN;
	for(int i=k-1;i<A;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(C[B[i][j]]<min)
			  min=C[B[i][j]];
			if(C[B[i][j]]>max)
			  max=C[B[i][j]];
			
		}
	}
	if(min==0)
	  ar.push_back(max+1);
	else
	  ar.push_back(0);
    }
return ar;
}
int main()
{
	vector<int> c;
	int a;
	cin>>a;
	int b[a][2];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
	}
	vector<int> B=solve(a,b,c);
	for(int i=0;i<B.size();i++)
	{
		cout<<B[i]<<" ";
	}
	return 0;
}

//6
//0 1
//1 2
//0 3
//3 4
//3 5
//4 3 5 1 0 2
