//this program tells us about the graph (BASICALLY IT WORKS AS DFS FOR GRAPHS
#include<bits/stdc++.h>
using namespace std;
void printDFS(int **edges,int n,int sv,bool* visited)  //function to print graph
{
	cout<<sv<<endl;                  //this line prints
	visited[sv]=true;             //this lines mark true for the element that i visited
	for(int i=0;i<n;i++)         //loop to traverse
	{
		if(i==sv){      //if i==sv if it is closed graph which is not possible in our assumption
			continue;
		}
		if(edges[sv][i]==1){       //if elements found
			if(visited[i]){       //if element is already visited
				continue;
			}
			printDFS(edges,n,i,visited); //recusrion
		}
	}
}
void printBFS(int **edges,int n,int sv,bool* visited)  //sv= starting vertex
{
	queue<int> pendingVertices;  //queue to store pending vertices if vertices all other adjectent vertex are visited then pop that vertex  
	pendingVertices.push(sv);     //push it in starting vertex
	visited[sv]=true;             //putting it true in visited array
	while(!pendingVertices.empty())//loop will run until queue is not empty
	{
		int currentVertex=pendingVertices.front();  //extract front into currentvertex variable
		pendingVertices.pop();                      //pop that vertex
		cout<<currentVertex<<endl;                   //pushing adjustent of the current vertex into the queue if it is not visited
		for(int i=0;i<n;i++)
		{
			if(i==currentVertex)
			continue;
			
			if(edges[currentVertex][i]==1&&!visited[i])  //if it is edges and not visited
			{
			pendingVertices.push(i);
			visited[i]=true;                              //pushing together with marked as true
		    }
		}
	}
	
}
void BFS(int** edges,int n)
{
	bool* visited= new bool[n];   //created new dynamic array visited ,to track down the vertex that is already visited (bool type)
    for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)          //checks if any vertex is still not visited 
	{
		if(!visited[i])
		   printDFS(edges,n,i,visited);
	}   
	delete [] visited;
}
void DFS(int** edges,int n)
{
	bool* visited= new bool[n];   //created new dynamic array visited ,to track down the vertex that is already visited (bool type)
    for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)          //checks if any vertex is still not visited 
	{
		if(!visited[i])
		   printDFS(edges,n,i,visited);
	}   
	delete [] visited;
}
int main()
{
	int n,e; //n for vertex and e for edges
	cin>>n>>e;
	int **edges= new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)      //loop will run until the all the edges are entered
	{
		int f,s;             //f will be the vertex and s will be the vertex attched with it
		cin>>f>>s;
		edges[f][s]=1;       //marking the adjusting matrix to 1 for the entered vertex 
		edges[s][f]=1;
	}
	cout<<"DFS"<<endl;
	DFS(edges,n);     //calling of the function to print in DFS FORM
	cout<<"BFS"<<endl;
	BFS(edges,n);   //calling of the function to print in BFS FORM
	for(int i=0;i<n;i++)
	{
		delete [] edges[i];
	}
	delete [] edges;
	return 0;
}
