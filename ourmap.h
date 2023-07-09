#include<string>
#include<iostream>
using namespace std;

template<typename V>
class MapNode{               //node class
	public:
		string key;
		V value;
		MapNode* next;
		
		
		MapNode(string key,V value){
			this->key=key;
			this->value=value;
			next=NULL;
		}
		
		~MapNode(){
			delete next;  
		}
};

template<typename V>
class ourmap{            //hash map
	MapNode<V>** buckets;  //buckets inside the array
	int count;
	int numBuckets;
	
	public:
		//int count;  //to count the number of enteries inside the buckets
		ourmap()
		{
			count=0;
			numBuckets=5;      //initialy the size of bucket is 5
			buckets=new MapNode<V>*[numBuckets]; //allocating the memory dynamically to bucket of
			for(int i=0;i<numBuckets;i++)  //allocating every space inside the array to null
			{
				buckets[i]=NULL;
			}
		}
		
		~ourmap()   //destructor for releasing the memory recursively
		{
			 for(int i=0;i<numBuckets;i++)
			 {
			 	delete buckets[i];
			 }
			 delete []buckets;
		}
		
		int size(){   //returns size of the array{
		 return count;
	     }
		 
		 
		V getValue(string key){                        //returns the value at the key, if value id not found returns 0
			int bucketIndex=getBucketIndex(key);
			MapNode<V>* head=buckets[bucketIndex];
			while(head!=NULL){
				if(head->key==key){
					return head->value;
				}
				head=head->next;
			}
			return 0;
		} 
		
		private:       //private function
			
		 int getBucketIndex(string key){      //hashcode generator
			 int hashCode=0;
		 	
		 	int currentCoeff=1;
		 	for(int i=key.length()-1;i>=0;i--){
		 		hashCode+=key[i]*currentCoeff;
		 		hashCode=hashCode%numBuckets;   //to compress the hascode
		 		currentCoeff*=37;
		 		currentCoeff=currentCoeff%numBuckets;// to compress the currentCoeff
			 }
			 cout<<".."<<hashCode% numBuckets<<endl;
			 return hashCode% numBuckets;
		 }	
		
		void rehash(){                                   //REHASH FUNCTION TO DOUBLE THE SIZE OF ARRAY AS IF THE LOAD FACTOR BECOME GREATER THAN 0.7
			MapNode<V>** temp=buckets;
			buckets=new MapNode<V>*[2*numBuckets];
			for(int  i=0;i<2*numBuckets;i++){
				buckets[i]=NULL;
			}
			int oldBucketCount=numBuckets;
			numBuckets*=2;
			count=0;
			
			for(int i=0;i<oldBucketCount;i++){
				MapNode<V>* head=temp[i];
				while(head!=NULL){
					string key=head->key;
					V value=head->value;
					insert(key,value);
					head=head->next;
				}
			}
			
			for(int i=0;i<oldBucketCount;i++){
				MapNode<V>* head=temp[i];
				delete head;
			}
			delete [] temp;
		}
		
		public:                //PUBLIC
			
			double getloadfactor()
			{
				return (1.0*count)/numBuckets;
			}
			
		void insert(string key,V value)        //INSERT FUNCTION TO INSERT THE KEY AND VALUE
		{
		    int bucketIndex=getBucketIndex(key);
			MapNode<V>* head=buckets[bucketIndex];
			while(head!=NULL)
			{
			   if(head->key==key){
			   	head->value=value;
			   }	
			   head=head->next;
		    }	 
		    head=buckets[bucketIndex];
		    MapNode<V>* node=new MapNode<V>(key,value);
		    node->next=head;
		    buckets[bucketIndex]=node;
		    count++;
		    double loadFactor=(1.0*count)/numBuckets;
		    if(loadFactor>0.7){
		    	rehash();
			}
		}
		
		
		V remove(string key)               //REMOVE FUNCTION TO REMOVE THE VALUE USING THE KEY
		{
			int bucketIndex=getBucketIndex(key);
			MapNode<V>* head =buckets[bucketIndex];
			MapNode<V>* prev= NULL;
			while(head!=NULL)
			{
				if(head->key==key){
					if(prev==NULL){
						buckets[bucketIndex]=head->next;
					}
					else{
						prev->next=head->next;
					}
					V value=head->value;
					head->next=NULL;
					delete head;
					count--;
					return head;
				}
				prev=head;
				head=head->next;
			}
			return 0;
		}
};


