#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string word1,word2;
	cin>>word1;cin>>word2;
	int w1len = word1.length();
    int w2len = word2.length();
    int len = w1len + w2len;
    string arr;
    int i = 0, j = 0, k = 0;

    while(i < w1len && j < w2len){

        arr.push_back(word1[i++]);
        arr.push_back(word2[j++]);

    }

    while(i < w1len){

        arr.push_back(word1[i++]);
    }

    while(j < w2len){

        arr.push_back(word2[j++]);
    }

    cout<<arr;

    return 0;
}
