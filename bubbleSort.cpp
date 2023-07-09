#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=11;
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(num+i);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		int a=v[v.size()-1];
		v.pop_back();
		v.push_front(a);
	}
	return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//int bS(int v[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(v[i]>v[j]){
//				int temp=v[i];
//				v[i]=v[j];
//				v[j]=temp;
//			}
//		}
//	}
//	return v[n-1];
//}
//int main(){
//	int n;
//	cin>>n;
//	int v[n];
//	cout<<"Enter array"<<endl;
//	for(int i=0;i<n;i++){
//		cin>>v[i];
//	}
//	cout<<bS(v,n);
//	return 0;
//}
