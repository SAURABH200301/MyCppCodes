#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
	unordered_map<string,int> ourmap;  //creating object of map where string is key and int is variable
	 
	 //insert
	 pair<string,int> p("abc",1);//here we can insert using pair 
	 ourmap.insert(p);//using insert function we insert it in map
	 ourmap["def"]=2;//here we insert using array method
	 
	 //find or access
	 cout<<ourmap["abc"]<<endl;
	 cout<<ourmap.at("abc")<<endl;
	 
	 cout<<"size: "<<ourmap.size()<<endl;
	 cout<<ourmap["ghi"]<<endl;//accessing using array method if key is not present it will insert with value 0
	 cout<<"size: "<<ourmap.size()<<endl;
	 
	 //check presence
	 if(ourmap.count()>0){   //as in map every key is unique so count can at max be 1 or min to 0
	 	cout<<"ghi is present"<<endl;
	 } 
           
     //erase
	 ourmap.erase("ghi");
	  cout<<"size: "<<ourmap.size()<<endl; 	
	  return 0;
}
