#include "TrieNode.h"
#include<string.h>

class Trie{
	TrieNode *root;
	
	public:
		Trie()
		{
			root=new TrieNode('\0');  
		}
		//SEARCH
	bool Search(string word){
		return search(root,word);
	}
		 
	bool search(TrieNode* root,string word)
	{
		if(word.length()==0){
			return root->isTerminal;
		}
		
		int index= word.at(0)-'a';
		TrieNode *child;
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else
	    	return false;
		
		return search(child,word.substr(1));
	}
	

		
	//FOR USER
	void insertWord(string word){
		insertWord(root,word);
	}		
	//for our use
	void insertWord(string word)
	{
	    //BASE CASE
		if(word.size()==0){
			root->isTerminal=true;
			return;
		}	
		
		//SMALL CALCULATION
		int index=word.at(0)-'a';
		TrieNode *child;
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else{
			child=new TrieNode(word.at(0));
			root->children[index]=child;
		}
		
		//RECURSIVE CALL	
		insertWord(child,word.substr(1));
	}
	

	
	void removeWord(TrieNode* root,string word){
		//BASE CASE
		if(word.size()==0){
			root->isTerminal=false;
			return;
		}
		
		//SMALL CALCULATION
		
		TrieNode *child;
		int index=word.at(0)-'a';
		if(root->children[index]!=NULL){
			child=root->children[index];
		}
		else{
			//WORD NOT FOUND
			return;
		}
		//RECURSIVE CALL
		removeWord(child,word.substr(1));
		
		//DEALLOCATING THE CHILD NODE IF IT IS USELESS
		if(child->isTerminal==false){
			for(int i=0;i<26;i++){
				if(child->children[i]!=NULL)
				return;
			}
			delete child;
			root->children[index]=NULL;
		}	
	}
	
	//REMOVE WORD FOR USER
	void removeWord(string word)
	{
		removeWord(root,word);
	}
	

	
};
