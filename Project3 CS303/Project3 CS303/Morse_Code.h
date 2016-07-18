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

#ifndef book_hpp
#define book_hpp

#include<iostream>
#include<string>

using namespace std;

struct tree {
	char info;
	tree *Left, *Right;
};

class Morse {
public:
	Morse();
	string getLetter();
	string getCode();
	void setLetter();
	void setCode();

private:
	

};




#endif /* Morse_Code.hpp */

