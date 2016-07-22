/*
Morse_Code.cpp file
*/

#include "Morse_Code.h"

Morse::Morse()
{
	treeMade = false;
	root = new tree;
	root->letter = "~";
	root->dotdash = "";
	root->Left = nullptr;		// no nodes
	root->Right = nullptr;
}

string Morse::decode(string dotToAscii)
{
	// TODO: Use maps and make this work
	//search tree to locate letter by changing . and - to
	//0 and 1 to properly search tree
	return string();
}

string Morse::encode(string asciiToDot)
{
	// TODO: Use maps and make this work
	//travers tree to find depth of letter to return code
	//by converting 0 and 1 to . and -
	return string();
}

void Morse::makeLetter(string tempLetter, string letterDotdash){
	asciiToDot[tempLetter] = letterDotdash; // populate maps
	dotToAscii[letterDotdash] = tempLetter;
	tree **currTree = &root;				// Pointer to a pointer to root
	for (int i=0; i <= letterDotdash.length(); i++){
		if (letterDotdash[i]=='.'){			// dot = Navigate left
			if ((*currTree)->Left == nullptr){		// if node DNE
				(*currTree)->Left = new tree;		// make it as empty node
				currTree = &((*currTree)->Left);	// advance to dummy node
			}
			else {
				currTree = &((*currTree)->Left);	// node exists lets go
			}
		}
		if (letterDotdash[i]=='-' || letterDotdash[i]=='_'){ // dash = navigate right
			if ((*currTree)->Right == nullptr){
				(*currTree)->Right = new tree;
				currTree = &((*currTree)->Right); // go read the comments above
			}
		else {
				currTree = &((*currTree)->Right);
			}
		}
	}
	
	(*currTree)->dotdash=letterDotdash; // found the correct location
	(*currTree)->letter=tempLetter;		// set dots and letters
	
	if (asciiToDot.size() > 25){
		treeMade = true;				// Use this to keep other functions disabled
										// until tree is populated
	}
}
