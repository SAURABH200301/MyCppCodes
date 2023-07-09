// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;
int c=0;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	c++;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-2; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;
		swap(&arr[min_idx], &arr[i]);
	}
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	selectionSort(arr, n);
	
	cout<<c;
    }
	
	return 0;
}


?
