#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> generate(int rows){
 	vector<vector<int>> vec;
 	for (int i = 0; i < rows; i++)
    {
        int val = 1;

        vector<int> r;
        for (int k = 0; k <= i; k++)
        {
            r.push_back(val);
            val = val * (i - k) / (k + 1);
        }
        vec.push_back(r);
    }
return vec;
 }
int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;
    vector<vector<int>> vec = generate(rows);
    for(int i=0;i<vec.size();i++){
    	for(int j=0;j<vec[i].size();j++){
    		cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
