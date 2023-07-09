//this is header file for the TRIE DATA STRUCTURE which is working like dictionary
// #define NULL 0
class TrieNode
{
   public:                  
   char data;               //this is char type data which will store chracter
   TrieNode** children;     //this is children pointer which store the address of the other nodes(charcter)
   bool isTerminal;         //isTerminal is for those characters where the word will end, there it will be TRUE indicating that the word is end here 
   
   TrieNode(char data)        //constructor
   {
   	this->data=data;
   	children=new TrieNode*[26]; //there are 26 character in english aphabets so it will store all those
   	for(int i=0;i<26;i++)     //all the letters are supposed to be small (0 for a and 25 for z
   	{
   		children[i]=NULL;   
	}
	   isTerminal=false;            //by default there is no termination of word
   	}	
};
