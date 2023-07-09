/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%5==0)
	{
		cout<<n/5;
	}
	else
	 cout<<(n/5)+1;
	
	return 0; 
}
#include <iostream>
#include<math.h>
using namespace std;

int main() {

    int N = 0,ans=0;
    cin>>N;
    
    long data[N];
    for(int i=0; i<N; i++)
        cin>>data[i];
    
    for(int i=0;i<N;i++)
    {
        ans=ans+((data[i]%10)*pow(10,N-1-i));
    } 
    cout<<ans;
    if(ans%10==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    
    return 0;
}*/
// C++ implementation of the approach 
#include <iostream> 
using namespace std; 

// Function that returns true if the 
// number formed by the last digits of 
// all the elements is divisible by 10 
bool isDivisible(int arr[], int n) 
{ 
	// Last digit of the last element 
	int lastDigit = arr[n - 1] % 10; 

	// Number formed will be divisible by 10 
	if (lastDigit == 0) 
		return true; 

	return false; 
} 

// Driver code 
int main() 
{ 
    int n;
    cin>>n;
	int arr[n]; 
	for(int i=0;i<n;i++)


	if (isDivisible(arr, n)) 
		cout << "Yes"; 
	else
		cout << "No"; 

	return 0; 
} 

