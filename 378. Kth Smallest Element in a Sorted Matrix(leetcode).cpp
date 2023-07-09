#include<bits/stdc++.h>
using namespace std;
// 1 5 9
// 10 11 13
// 12 13 15
int kthSmallest(vector<vector<int>>& matrix, int z) {
        int n = matrix.size(), m = matrix[0].size();
        int a[n*m], k=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[k] = matrix[i][j];
                k++;
            }
        }
        sort(a, a+(n*m));
        return a[z-1];
    }
int main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> vec;
		for(int j=0;j<n;j++){
			int a;cin>>a;
			vec.push_back(a);
		}
		v.push_back(vec);
	}
	cout<<kthSmallest(v,k);
	return 0;
}
