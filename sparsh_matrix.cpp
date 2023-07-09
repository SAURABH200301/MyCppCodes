#include<iostream>
using namespace std;
class element
{
	public:
     int i,j,x;	
};
class sparsh_matrix
{
    public:
    	int m,n,num;
    	element *e;
     void create( sparsh_matrix *s)
     {
     	cout<<"enter dimension"<<endl;
     	cin>>s->m>>s->n;
     	cout<<"enter the number of non-zero present in the matrix"<<endl;
     	cin>>s->num;
     	s->e=new element[s->num];
     	cout<<"enter all elements"<<endl;
     	for(int i=0;i<s->num;i++)
     	{
     		cout<<"enter the row and column number"<<endl;
     		cin>>s->e[i].i;
			cin>>s->e[i].j;
     		cout<<"enter the element"<<endl;
     		cin>>s->e[i].x; 
		 }
	 }
	 void display(sparsh_matrix *s)
	 {
	 	int k=0;
	 	for(int i=0;i<s->m;i++)
	 	{
	 		for(int j=0;j<s->n;j++)
	 		{
	 			if(i==s->e[k].i&&j==s->e[k].j)
	 			 cout<<s->e[k++].x<<" ";
	 			else
	 			 cout<<0<<" ";
			 }
			 cout<<endl;
		 }
	 }
	 void add(sparsh_matrix *s,sparsh_matrix *s1)  //function for the addition
	 {
	 	if(s->m!=s1->m||s->n!=s1->n)
	 	  {
	 	  	cout<<"DIMENSTIONS ARE NOT SAME"<<endl;
	 	  	return;
		   }
	 	int k=0,l=0;
	 	for(int i=0;i<s->m;i++)
	 	{
	 		for(int j=0;j<s->n;j++)
	 		{
	 			if(i==s->e[k].i&&j==s->e[k].j)
	 			{
	 				if(i==s1->e[l].i&&j==s1->e[l].j)
	 				{cout<<s->e[k++].x+s1->e[l++].x<<" ";
					 }
					 else
					 cout<<s->e[k++].x<<" ";
				 }
				 else if(i==s1->e[l].i&&j==s1->e[l].j)
	 			{
	 				if(i==s->e[k].i&&j==s->e[k].j)
	 				{cout<<s->e[k++].x+s1->e[l++].x<<" ";
					 }
					 else
					 cout<<s1->e[l++].x<<" ";
				 }
	 			else
	 			 cout<<0<<" ";
			 }
			 cout<<endl;
		 }
	 }
	 
};
int main()
{
	sparsh_matrix s,s1;
	cout<<"THIS PROGRAM IS TO PERFORM FUCNTION ON THE SPARSH MATRIX"<<endl;
	cout<<"matrix 1"<<endl;
	s.create(&s);cout<<endl;
	s.display(&s);
	cout<<"matrix 2"<<endl;
	s1.create(&s1);cout<<endl;
	s1.display(&s1);
	s.add(&s,&s1);
	cout<<endl;
	return 0;
}
