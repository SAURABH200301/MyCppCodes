#include<bits/stdc++.h>
using namespace std;
int getClosest(int val1, int val2,int target){
	if (target - val1 >= val2 - target)
		return val2;
	else
		return val1;
}

int findClosest(vector<int> arr, int n, int target){
	if (target <= arr[0])
		return arr[0];
	if (target >= arr[n - 1])
		return arr[n - 1];

	int i = 0, j = n, mid = 0;
	while (i < j) {
		mid = (i + j) / 2;
		if (arr[mid] == target)
			return arr[mid];

		if (target < arr[mid]) {
			if (mid > 0 && target > arr[mid - 1])
				return getClosest(arr[mid - 1],arr[mid], target);

			j = mid;
		}
		else {
			if (mid < n - 1 && target < arr[mid + 1])
				return getClosest(arr[mid],arr[mid + 1], target);
			i = mid + 1;
		}
	}
	return arr[mid];
}
int minOperations(int n) {
    vector<int> v;
    int num=0;
    for(int i=0;num<=n+10;i++){
    	v.push_back(pow(2,i));
    	num=v[i];
	}
    int count=0;
    if(n%2!=0){
    	count++;
    	n+=1;
	}
	while(n!=0){
		int temp=findClosest(v,v.size(),n);
		if(n==temp){
			count++;
			n=0;
			break;
		}
		int dif=abs(temp-n);
		if(abs(dif-findClosest(v,v.size(),dif))!=0){
			
		}else{
			count++;
		}
		n=temp;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<minOperations(n);
}

// This code is contributed by Smitha Dinesh Semwal

