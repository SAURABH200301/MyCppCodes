#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m=abs(y1-y2)+abs(x2-x1);
        if((y1==y2 and abs(x1-x2)==1) or (x1==x2 and abs(y1-y2)==1)){
        	cout<<"NO"<<endl;
        	continue;
		}
		if(m&1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
    }
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//bool yes;
//int c=0,v=0;
//int Journey_Knight(int i,int j,int x2,int y2,int sum,int chess[][9]){
//    c++;
//       if(i<=0 or j<=0 or i>8 or j>8)
//         return 0;
//        if(sum>100 or !yes){
//        	return 0;
//		}
//		if(yes) return 1;
//		if(chess[i][j]!=-1)
//		   return chess[i][j];
//// 		cout<<i<<" "<<j<<" "<<x2<<" "<<y2<<" "<<sum<<endl;
//        if(sum==100 and i==x2 and j==y2){
//        	v++;
////        	cout<<i<<" "<<x2<<" "<<j<<" "<<y2<<" "<<sum<<endl;
//        	cout<<"YES"<<endl;
//        	yes=true;
//        	return 1;
//		}
////		cout<<"its working "<<count<<endl;
////        if(i<=1 and j<=1){
////        	 //upper left corner
////        	Journey_Knight(i+2,j+1,x2,y2,++sum);
////	     	Journey_Knight(i+1,j+2,x2,y2,++sum);
////	    	Journey_Knight(i-1,j+2,x2,y2,++sum);
////	    	Journey_Knight(i-2,j+1,x2,y2,++sum);
////		}
////		else if(i>=6 and j<=1){
////			//upper right corner
////			Journey_Knight(i-1,j-2,x2,y2,++sum);
////	       	Journey_Knight(i+1,j-2,x2,y2,++sum);
////	    	Journey_Knight(i+2,j-1,x2,y2,++sum);
////	    	Journey_Knight(i+2,j+1,x2,y2,++sum);
////		}
////		else if(i<=1 and j>=6){
////			//lower left corner
////			Journey_Knight(i-2,j-1,x2,y2,++sum);
////			Journey_Knight(i+1,j+2,x2,y2,++sum);
////	     	Journey_Knight(i-1,j+2,x2,y2,++sum);
////	    	Journey_Knight(i-2,j+1,x2,y2,++sum);
////		}
////		else if(i>=6 and j>=6){
////			//lower right corner
////			Journey_Knight(i-2,j-1,x2,y2,++sum);
////	    	Journey_Knight(i-1,j-2,x2,y2,++sum);
////	    	Journey_Knight(i+1,j-2,x2,y2,++sum);
////	    	Journey_Knight(i-2,j+1,x2,y2,++sum);
////		}
////		else{  
//          int a=INT_MAX;
//			a=max(a,Journey_Knight(i-2,j-1,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i-1,j-2,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i+1,j-2,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i+2,j-1,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i+2,j+1,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i+1,j+2,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i-1,j+2,x2,y2,++sum,chess));
//	    	a=max(a,Journey_Knight(i-2,j+1,x2,y2,++sum,chess));
//	    	chess[i][j]=a;
////		}
//	
////	cout<<"NO"<<endl;
//}
//int solve(int i,int j,int x2,int y2){
//	int *chess= new int[9][9];
//	for(int i=0;i<9;i++){
//		for(int j=0;j<9;j++)
//		  chess[i][j]=-1;
//	}
//	return Journey_Knight(i,j,x2,y2,1,chess)
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//			int i,j,x2,y2;
//	cin>>i>>j>>x2>>y2;
//	yes=false;
//	if(solve(i,j,x2,y2))
//	  cout<<"YES"<<endl;
//	else
//	  cout<<"NO"<<endl;
//	cout<<c<<" "<<v<<endl;
//	}
//   
//	return 0;
//}
