#include<bits/stdc++.h>
using namespace std;
void trim_back(string & s){
	for(int i=s.length()-1;i>=0;i--){
	    if(s[i]==' ') s.erase(i);
	    else return;
	}
}
int lengthOfLastWord(string s) {

//        if(s.find(' ')==string::npos) return s.size();

        trim_back(s);
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
           if(s[i]==' ') break;
           else count++;
        }
        return count;
    }
int main(){
	string s;
    getline(cin,s);
	cout<<lengthOfLastWord(s);
	return 0;
}
