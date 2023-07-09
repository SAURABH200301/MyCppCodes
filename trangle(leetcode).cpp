#include<bits/stdc++.h>
using namespace std;
//int minPath(vector<vector<int>>& tri,int i,int j,int sum){
//        if(i+1>= tri.size() or j>=tri[i].size())
//            return 0;
//        if(tri[i+1][j]<=tri[i+1][j+1]){
//            // cout<<tri[i+1][j];
//            sum+=tri[i+1][j];
//            return minPath(tri,i+1,j,sum);
//        }else{
//            sum+=tri[i+1][j+1];
//            return minPath(tri,i+1,j+1,sum);
//        }
//        // return sum;
//    }
//    int minimumTotal(vector<vector<int>>& tri) {
//        int num=0;
//        if(tri.size()==1)
//            return tri[0][0];
//        num+=tri[0][0];
//        return minPath(tri,0,0,num);
//    }

    int minPath(vector<vector<int>>& tri,int i,int j){
    	vector<int> r=tri[i];
    	if(i==tri.size()-1) return r[j];
    	
    	int cur=r[j];
    	int maxLeft=minPath(tri,i+1,j);
    	int maxRigth=minPath(tri,i+1,j+1);
    	
    	return curr+ min(maxLeft,maxRight);
	}

    int minimumTotal(vector<vector<int>>& tri) {
        if(tri.size()==1)
            return tri[0][0];
        return minPath(tri,0,0);
    }


int main(){
	vector<vector<int>> v;
	for(int i=0;i<4;i++){
		vector<int> c;
		for(int j=0;j<i+1;j++){
			int a;
			cin>>a;
			c.push_back(a);
		}
		v.push_back(c);
	}
	 cout<<minimumTotal(v);
	return 0;
}
