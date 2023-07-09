#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> v,int n){
    // cout<<v[0].size()<<" "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
               if(v[i][j]==n)
                    return true;
            }
        }
        return false;
//    int k;
//    for(int i=v.size()-1;i>=0;i--){
//    	if(v[i][0]<=n)
//    	  {
//    	      k=i;
//    	      break;
//    	  }
//	}
//	for(int i=0;i<v[0].size();i++){
//		if(v[k][i]==n)
//		{
//		   return true;
//		}
//	}
//	return false;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a;
	for(int i=0;i<n;i++){
		vector<int> row;
		for(int j=0;j<m;j++){
			int k;
			cin>>k;
			row.push_back(k);
		}
		a.push_back(row);
	}
	int num;
	cin>>num;
	if(searchMatrix(a,num))
	   cout<<"found";
	else
	   cout<<"not found";
	return 0;
}
