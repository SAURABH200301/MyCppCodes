#include<iostream>
using namespace std;
int main()
{
	
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if (grade >= 38 && grade % 5 >= 3)
            grade += 5 - grade % 5;
        cout << grade << endl;
}
}
