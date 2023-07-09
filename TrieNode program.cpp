#include<iostream>
#include<string>
using namespace std;
#include "Trie.h"

int main()
{
	Trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("dot");
	t.insertWord("do");
	cout<<t.Search("and");
	t.removeWord("and");
	cout<<t.Search("and");
	return 0;
}
