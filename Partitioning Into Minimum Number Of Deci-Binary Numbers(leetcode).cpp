#include<bits/stdc++.h>
using namespace std;

int minPartitions(string n) {
        int max_digit = 0;
        for (char digit: n) {
            max_digit = max(max_digit, digit - '0');
        }
        return max_digit;
    }

int main(){
	string s;
	cin>>s;
	cout<<minPartitions(s);
	return 0;
}
