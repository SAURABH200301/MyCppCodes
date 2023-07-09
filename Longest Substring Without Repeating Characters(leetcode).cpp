#include<bits/stdc++.h>
using namespace std;
int main(){
	string str="aaaaa";
	 int maxLength = 0;
    int i = 0;
        int n=str.length();
    while(i < n)
    {
        bool visited[256];
        int j = i;
        while(j < n && visited[str[j]] == false)
        {
            maxLength = max(maxLength, j - i + 1);
            visited[str[j]] = true;
            j = j + 1;
        }
        visited[str[i]] = false;
        i = i + 1;
    }
    cout<<maxLength;
	return 0;
}
