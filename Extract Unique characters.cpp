#include<bits/stdc++.h>
#include<string.h>
#include<set>
using namespace std;
int main()
{
    string s1;
    set<char> s;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        s.insert(s1[i]);
    }
    set<char> :: iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout <<(*itr);
    }
    return 0;
}
