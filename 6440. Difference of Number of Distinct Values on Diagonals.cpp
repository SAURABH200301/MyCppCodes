#include<bits/stdc++.h>
using namespace std;
vector<int> getDistinct(int i,int j,vector<vector<int>> grid){
	int left=0,right=0,k,l,c,v;
	unordered_map<int> l,r;
	if(i<j){
		k=0;
		l=k+(j-i);
		v= grid.size()-1; //end of j
		c= v-(j-i); //end of i
	}
	else{
		k=i-j;
		l=0;
		c=grid.size()-1;
		v=c-(i-j);
	}
	for(;k<i-1;k++){
		for(;l<j-1;j++){
			l[grid[k][l]]++;
		}
	}
	k++;l++;
	for(;k<c;k++){
		for(;l<v;l++){
			r[grid[k][l]]++;
		}
	}
	left=l.size();
	right=r.size();
	vector<int> ans;
	ans.push_back(left);
	ans.push_back(right);
	return ans;
}
vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
    vector<vector<int>> ans=grid;
    for(int i=0;i<grid.size();i++){
    	for(int j=0;j<grid[0].size();j++){
    		vector<int> dis= getDistinct(i,j,grid);
    		ans[i][j]=abs(dis[0]-dis[1]);
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a;cin>>a;
			v.push_back(a);
		}
	}
	vector<vector<int>> ans=differenceOfDistinctValues(v);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

