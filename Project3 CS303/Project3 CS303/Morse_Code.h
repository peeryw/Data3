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
#include<string>


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
	//friend ostream& getline(istream&, string&);
	//friend istream& operator>>(istream& in, string& value);
	string getLetter();
	string getCode();
	void setLetter(string letter, string code); //inserts letter based on code value
	void setCode();//not sure what to do with this yet
	friend istream& operator>>(istream& input, tree& buildTree);
	void makeLetter(string letter, string letterDotdash);

private:
	tree *root;
};




#endif /* Morse_Code.hpp */

