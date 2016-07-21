/*
Morse_Code.cpp file
*/

#include "Morse_Code.h"

Morse::Morse()
{
	root.letter = '~';
	root.dotdash = '';
	root.Left = nullptr;
	root.Right = nullptr;

}

void Morse::makeLetter(char tempLetter, string letterDotdash){
	tree currTree = root;
	for (int i=0; i < letterDotdash.length(); i++){
		if (letterDotdash[i]=='.'){
			if (currTree.Left == nullptr){
				currTree.Left = new tree;
				currTree = *currTree.Left;
			}
			else {
				currTree = *currTree.Left;
			}
		}
		if (letterDotdash[i]=='-'){
			if (currTree -> Right == nullptr){
				currTree -> Right = new tree;
				currTree = currTree -> Right;
			}
		else {
				currTree = currTree -> Right;
			}
		}
	}
	currTree->dotdash=letterDotdash;
	currTree->letter=tempLetter;
}


