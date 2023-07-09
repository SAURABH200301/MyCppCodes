#include<bits/stdc++.h>
using namespace std;
int count_1(int i ,int j,vector<vector<int>>& grid){
	if(i<0 or j<0 or i>3 or j>3)
	 return 0;
	
	if(grid[i][j]==1){
		return 1+max(max(count_1(i+1,j,grid),count(i,j+1,grid)),max(count(i-1,j,grid)+count(i,j-1,grid)));
	}
	return 0;
}

int count_min(int i,int j,vector<vector<int>>& grid){
	if(i<0 or j<0 or i>3 or j>3)
	 return 0;
	return max(max(count_1(i+1,j,grid),count(i,j+1,grid)),max(count(i-1,j,grid)+count(i,j-1,grid)));
}

 int orangesRotting(vector<vector<int>>& grid){
 	for(int i=0;i<3;i++){
 	   auto a= find(grid[i].begin(),grid[i].end(),2);
 	   if(a!=grid[i].end()){
 	   	  int j=grid[i].begin()-a;
 	   	  int ans = count_min(i,j,grid);
	   }
	 }
	 return ans;
 }
int main(){
	vector<vector<int>> matrix;
	for(int i=0;i<3;i++){
		vector<int> v;
		for(int j=0;i<3;j++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		matrix[i].push_back(v);
	}
	cout<<orangesRotting(matrix);
	return 0;
}
