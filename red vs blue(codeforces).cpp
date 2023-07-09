#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		 int n, r, b;
    cin >> n >> r >> b;
    string s="";
    for( int i = 1; i <= b; i++ ){
        s += "R";
        s += "B";
        r--;
    }
    if( r ){
        r--;
        s += "R";
    }
    while( r ){
        string t;
        for( char c: s ){
            if( c == 'B' && r ){
                r--;
                t += 'R';
            }
            t += c;
        }
        if( r ){
            r--;
            t += "R";
        }
        s = t;
    }
    cout << s << endl;
		
	}
	return 0;
}
