#include<bits/stdc++.h>
using namespace std;

// "hello"
// "ooolleoooleh"
bool permutation(string s,string s1){
    cout<<s<<" "<<s1<<"upr"<<endl;
	sort(s.begin(),s.end());
	sort(s1.begin(),s1.end());
	for(int i=0;i<s.length();i++){
		if(s[i]!=s1[i])
		  return false;
	}
	return true;
}

bool check(string s1,string s2){
    unordered_map<char,int> m1,m2;
	for(int i=0;i<s1.length();i++){
		m1[s1[i]]++;
	}
	for(int i=0;i<s2.length();i++){
		m2[s2[i]]++;
	}
	if(m1.size()<=m2.size()){
		for(int i=0;i<s1.length();i++){
			if(m1[s1[i]]<=m2[s1[i]]){
			    
			    for(int k=0;k<m2[s1[i]];k++){
			        int j=s2.find(s1[i]);
				// cout<<j<<"j";
				
				if(j+s1.length()<=s2.length()){
				  string s= s2.substr(j,s1.length());
				//   cout<<s<<endl;
				  if(permutation(s,s1)){
				  	return true;
				  }	
				}
				// cout<<s2<<endl;
				int l=s1.length();
				// cout<<j<<" "<<abs(j-l)<<" "<<s1.length()<<endl;
			    if((j-l)>=0 and abs(j-l)<=s2.length()){
			     //   cout<<i<<endl;
			    	string s3= s2.substr(abs(j-l),s1.length()-1);
			    	cout<<s3<<j-l<<endl;
			    	if(permutation(s3,s1)){
				  	return true;
				  }	
				}
				
				s2.erase(j,1);
				m2[s1[i]]--;
				if(m1[s1[i]]==m2[s1[i]] and m1[s1[i]]==1)
				  return false;
			    }
			}else{
			    cout<<"hey";
				return false;
			}
		}
	}else{
	    cout<<"hello";
		return false;
	}
	cout<<"hmmm";
	return false;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin.ignore();
	cin>>s2;
	if(check(s1,s2))
	  cout<<"true";
	 else
	   cout<<"false";
	return 0;
}
