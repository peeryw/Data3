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

string Morse::decode()
{
	//search tree to locate letter by changing . and - to
	//0 and 1 to properly search tree
	return string();
}

string Morse::encode()
{
	//travers tree to find depth of letter to return code
	//by converting 0 and 1 to . and -
	return string();
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
