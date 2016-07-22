/*
Morse_Code.cpp file
*/

#include "Morse_Code.h"

Morse::Morse()
{
	root = new tree;
	root->letter = "~";
	root->dotdash = "";
	root->Left = nullptr;
	root->Right = nullptr;

}

void Morse::makeLetter(string tempLetter, string letterDotdash){
	tree **currTree = &root;
	for (int i=0; i <= letterDotdash.length(); i++){
		if (letterDotdash[i]=='.'){
			if ((*currTree)->Left == nullptr){
				(*currTree)->Left = new tree;
				currTree = &((*currTree)->Left);
			}
			else {
				currTree = &((*currTree)->Left);
			}
		}
		if (letterDotdash[i]=='-' || letterDotdash[i]=='_'){
			if ((*currTree)->Right == nullptr){
				(*currTree)->Right = new tree;
				currTree = &((*currTree)->Right);
			}
		else {
				currTree = &((*currTree)->Right);
			}
		}
	}
	
	(*currTree)->dotdash=letterDotdash;
	(*currTree)->letter=tempLetter;
}

void Morse::setLetter(string letter, string code)
{
	//translate code into depth of letter from main root
	//travers tree till it gets to node at that depth
	//insert letter as the data for that node
	//if nodes allong the way of traversal do not exist
	//   then create the nodes and leave data as empty
}

void Morse::setCode()
{
	
}

//ostream & getline(istream& in, string& value)
//{
//	// TODO: insert return statement here
//	/*getline(in, value);
//	return in;*/
//}
//
//istream & operator >> (istream & fin, string& value)
//{
//	
//	// TODO: insert return statement here
//}
