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

string Morse::decode(const string& code)
{
	map<string, string>::const_iterator it= dotToAscii.find(code);
	if (it != dotToAscii.end())
	{
		return it->second;
	}
	else
		return "";
}

string Morse::encode(const string& letter)
{
	map<string, string>::const_iterator it = asciiToDot.find(letter);
	if (it != asciiToDot.end())
	{
		return it->second;
	}
	else
		return "";
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
