#include <bits/stdc++.h>
using namespace std;

int pairSticks(int length[], int D, int n)
{
    sort(length, length+n);
    int res = 0;

    for(int i=0; i<n-1; i++)
    {
        if (length[i + 1] - length[i] <= D) { res++; i++;}
    }
 
   
    

 return res;
}
int main(void) {
	int x,y;
	cin>>x>>y;
	int length[x];
	for(int i=0;i<x;i++)
	   cin>>length[i];
	cout<<pairSticks(length,y,x);
	return 0;
}

