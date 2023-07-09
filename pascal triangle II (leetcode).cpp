#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex) {
        vector<int> r;
        int i= rowIndex;
        int val = 1;

        
        for (int k = 0; k <= i; k++)
        {
            r.push_back(val);
            val = val * (i - k) / (k + 1);
            cout<<val<<endl;
        }
    
       return r; 
    }
int main(){
	int n;
	cin>>n;
	vector<int> v=getRow(n);
	for(int i=0;i<v.size();i++)
	  cout<<v[i]<<" ";
	return 0;
}
