#include<bits/stdc++.h>
using namespace std;
// 2
// 3 2 1
// 3 1
// 2
// 3 1 2
// 3
// 1 2
template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		vector<int> a,b;
		for(int i=0;i<x;i++){
			int c;
			cin>>c;
			a.push_back(c);
		}
		for(int i=0;i<y;i++){
			int c;
			cin>>c;
			b.push_back(c);
		}
		int i=2*n;
	    while(i--){
	    	if(a.size()==0){
	    		cout<<"Bob"<<endl;
	    		break;
			}
			else if(b.size()==0){
				cout<<"Alice"<<endl;
				break;
			}
			else if(a.front()>b.front()){
				int aa=a.front();
				int bb=b.front();
				a.push_back(bb);
				a.push_back(aa);
				pop_front(a);
				pop_front(b);
			}
			else{
				int aa=a.front();
				int bb=b.front();
				b.push_back(aa);
				b.push_back(bb);
				pop_front(a);
				pop_front(b);
			}
		}
		if(i<0)
		  cout<<"Draw"<<endl;
	}
	return 0;
}
