#include<bits/stdc++.h>
using namespace std;
// s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
     bool isInterleave(string s1, string s2, string s3) {
        if (s3.length() != s1.length() + s2.length()) {
            return false;
        }
        bool *dp = new bool[s2.length() + 1];
        for (int i = 0; i <= s1.length(); i++) {
            for (int j = 0; j <= s2.length(); j++) {
                if (i == 0 && j == 0) {
                    dp[j] = true;
                } else if (i == 0) {
                    dp[j] = dp[j - 1] && s2[j-1] == s3[i + j - 1];
                } else if (j == 0) {
                    dp[j] = dp[j] && s1[i-1]== s3[i + j - 1];
                } else {
                    dp[j] = (dp[j] && s1[i-1] == s3[i + j - 1]) || (dp[j - 1] && s2[j-1]== s3[i + j - 1]);
                }
            }
        }
        return dp[s2.length()];
    }

int main(){
	string s1,s2,s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cout<<isInterleave(s1,s2,s3);
	return 0;
}
