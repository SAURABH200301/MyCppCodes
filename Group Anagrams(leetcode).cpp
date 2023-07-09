#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> um;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            um[temp].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto item:um){
            result.push_back(item.second);
        }
        
        return result;
    }
//vector<vector<string>> groupAnagrams(vector<string>& strs){
//	vector<vector<string>> v;
//	for(int i=0;i<strs.size();i++){
//		
//		if(strs[i]!=""){
//			string s=str[i];
//			string nS=s;
//			sort(nS.begin(),nS.end());
//			strs[i]="";
//			vector<string> VecStr;
//			VecStr.push_back(s);
//			for(int j=0;j<strs.size();j++){
//				
//				if(i!=j ){
//					string str=strs[j];
//					sort(str.begin(),str.end());
//					if(nS==str){
//						VecStr.push(strs[j]);
//						strs[j]="";
//					}
//				}
//			}
//		}
//	}
//	return VecStr;
//}
int main(){
	vector<string> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	vector<vector<string>> str=groupAnagrams(v);
	for(int i=0;i<str.size();i++){
		for(int j=0;j<str[i].size();j++){
			cout<<str[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}
