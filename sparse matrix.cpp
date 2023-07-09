#include<iostream>
using namespace std;
class element
{
	public:
  int i,j,x;	
};
class sparse
{
    int m,n,num;
	element *ele;
	public:
	sparse(int m,int n,int num)
	{
		this->m=m;
		this->n=n;
		this->num=num;
		ele=new element[this->num];
	}
	~sparse()
	{
		delete []ele;
	}
	sparse operator+(sparse &s);
	friend istream & operator>>(istream& is,sparse &s);	
	friend ostream & operator<<(ostream& os,sparse &s);
	
};
sparse sparse :: operator+(sparse &s)
{
	int i,j,k;
	if(m!=s.m||n!=s.n)
	{
		return sparse(0,0,0);
	}
	sparse *sum=new sparse(m,n,num+s.num);
	i=j=k=0;
	while(i<num&&j<s.num)
	{
		if(ele[i].i<s.ele[j].i)
		  sum->ele[k++]=ele[i++];
		else if(ele[i].i>s.ele[j].j)
		  sum->ele[k++]=s.ele[j++];
		else
		  {
		  	if(ele[i].j<s.ele[j].j)
		  	  sum->ele[k++]=ele[i++];
		  	else if(ele[i].j>s.ele[j].j)
		  	  sum->ele[k++]=s.ele[j++];
		  	else
		  	  {
		  	  	sum->ele[k]=ele[i];
		  	  	sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
				}
		  }
	}
     for(;i<num;i++)
        sum->ele[k++]=ele[i];
     for(;j<s.num;j++)
        sum->ele[k++]=s.ele[j];
    sum->num=k;
    
    return  *sum;
}
istream & operator>>(istream &is,sparse &s)
{
	cout<<"ENTER NON-ZERO ELEMENTS"<<endl;
	for(int i=0;i<s.num;i++)
	cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
	return is;
}
ostream &operator<<(ostream &os,sparse &s)
{
    int k=0;
	 for(int i=0;i<s.m;i++)
	 {
	 	for(int j=0;j<s.n;j++)
	 	{
	 		if(s.ele[k].i==i&&s.ele[k].j==j)
	 		   cout<<s.ele[k++].x<<" ";
	 		else
	 		  cout<<"0 ";
		 }
		 cout<<endl;
		 }	
		 return os;
}
int main()
{
   int n,m,num;
   cout<<"THIS IS SPARSE MATRIX"<<endl;
   cout<<"ENTER THE NUMBER OF ROWS ,COLUMNS AND NUMBER OF NON-ZERO ELEMENTS  FOR THE MATRIX 1"<<endl;
   cin>>n>>m>>num;
   sparse s(n,m,num);	
   cout<<"ENTER THE NUMBER OF ROWS ,COLUMNS AND NUMBER OF NON-ZERO ELEMENTS  FOR THE MATRIX 2"<<endl;
   cin>>n>>m>>num;
   sparse s1(n,m,num);
   cin>>s;
   cin>>s1;
   sparse sum=s+s1;
   cout<<"FIRST MATRIX"<<endl<<s;
   cout<<"SECOND MATRIX"<<endl<<s1;
   cout<<"SUM OF BOTH IS"<<endl<<sum;
   return 0;
}
