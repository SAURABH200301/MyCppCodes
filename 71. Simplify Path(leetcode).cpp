#include<bits/stdc++.h>
using namespace std;

// string simplifyPath(string path) {
//        
//        stack<string> st;
//        string res;
//        
//        for(int i = 0;  i<path.size(); ++i)
//        {
//            if(path[i] == '/')    
//                continue;
//            string temp;
//			// iterate till we doesn't traverse the whole string and doesn't encounter the last /
//            while(i < path.size() && path[i] != '/')
//            {
//				// add path to temp string
//                temp += path[i];
//                ++i;
//            }
//            if(temp == ".")
//                continue;
//			// pop the top element from stack if exists
//            else if(temp == "..")
//            {
//                if(!st.empty())
//                    st.pop();
//            }
//            else
//			// push the directory file name to stack
//                st.push(temp);
//        }
//        
//		// adding all the stack elements to res
//        while(!st.empty())
//        {
//            res = "/" + st.top() + res;
//            st.pop();
//        }
//        
//		// if no directory or file is present
//        if(res.size() == 0)
//            return "/";
//        
//        return res;
//    }

string simplifyPath(string s){
	if(s.length()==0) return "";
	string str="";
	if(s[s.length()-1]=='/')
	   	s[s.length()-1]=' ';
	for(int i=0;i<s.length();i++){
		if(s[i]!='.')
			str+=s[i];
	}
	while(str.find("//")!=string::npos){
	   		size_t n=str.find("//");
			str.replace(n,2,"/");	
	}
	if(str[str.length()-1]=' '){
	    str.replace(str.length(),1,"");
	}
	for(int i=0;i<str.length();i++){
	    if(str[i]==' '){
	        str.replace(i,1,"");
	    }
	}
	if(str.empty())
	    return "/";
	else
	    return str;
}
int main(){
	string s;
	cin>>s;
	cout<<simplifyPath(s);
	return 0;
}
