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


/*

So I think we need to change a few things moving forward.
 
 1) Whoever set this up, well done. Props to you, tree was bomb and your functions
	are excellent.
 2) With that said, we have this lean, mean tree machine ready to populate.
	Let's make it just ridiculously OP.
 3) We should create one tree object and then use the overloaded operator to 
	populate its branches. Basically, the constructor creates the tree,
	then everything else is secondary.
 4) We can create nodes with bullshit strings and then populate based on
	where our dotdash takes us.
 5) Tree creation will be a function, and then we have it and we're done. Like
	lights out, that's it.
 6) It will have to be called first thing in main so that we create the tree
	he wants. That's fine, it's miniscule finite runtime.
 7) getLetter and getCode will have to be POST creation. We will have to call
	the operator before they can be used.
 
*/

#ifndef book_hpp
#define book_hpp

#include<iostream>
#include<string>


using namespace std;

struct tree {
	tree() { Left = nullptr; Right = nullptr; }
	char letter;
	char dotdash;
	tree *Left, *Right;
};

class Morse {
public:
	Morse();
	friend istream& operator>>(istream& input, tree& buildTree);
	void makeLetter(char letter, string letterDotdash);

private:
	tree *root;
};




#endif /* Morse_Code.hpp */

