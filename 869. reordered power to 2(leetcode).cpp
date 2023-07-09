#include<bits/stdc++.h>
using namespace std;
bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
		
        vector<string> power;
        for(int i=0;i<=30;i++){
            int p = pow(2,i);
            power.push_back(to_string(p));
        }
        
        for(int i=0;i<=30;i++){
            sort(power[i].begin(),power[i].end());
        }
        
        for(int i=0;i<=30;i++){
            if(power[i] == s ) return true;
        }
        return false;
    }
int main(){
	int n;
	cin>>n;
	if(reorderedPowerOf2(n)) cout<<"true";
	else cout<<"false";
	return 0;
}
