/*
This class is used to create a binary tree from a file read in.
The first node is a dummy node and stores no letters.
The left branch of a root will be dots and the right branch will be dash
ex:

			dummy
			/   \
		 dot    dash
		 / \     / \
	  dot dash  dot dash

after the tree is created, it will be used to decode or encode a message
it will use a space as a deliminator
the assumtion is that each line will be a single string of either a single character
	or a single word

*/

#ifndef Morse_Code
#define Morse_Code

#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<vector>
#include "String_Tokenizer.h"


using namespace std;

struct tree {
	tree() { Left = nullptr; Right = nullptr; }
	string letter;
	string dotdash;
	tree *Left, *Right;
};

class Morse {
public:
	Morse();
	string getLetter(const string & code); //returns letter value of code
	string getCode(const string & letter); //returns code value of letter
	string decode(string code); //dot dash to letter
	string encode(string letter); //letter to dash dot
	void makeLetter(string letter, string letterDotdash); // also populates maps

private:
	tree *root;
	bool treeMade;
	map<string,string> asciiToDot; // For encode function
	map<string,string> dotToAscii; // For decode function
};

#endif /* Morse_Code.hpp */

