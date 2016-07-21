/*
Morse_Code.cpp file
*/

#include "Morse_Code.h"

Morse::Morse()
{
	root->Left->dotdash = '.';
	root->Right->dotdash = '-';
}

string Morse::getLetter()
{
	return string();
}

string Morse::getCode()
{
	return string();
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
