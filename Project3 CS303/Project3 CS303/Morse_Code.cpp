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

void Morse::setLetter()
{

}

void Morse::setCode()
{
	
}

ostream & getline(istream& in, string& value)
{
	// TODO: insert return statement here
	getline(in, value);
	return in;
}

istream & operator >> (istream & in, string& value)
{
	in >> value;
	return in;

	// TODO: insert return statement here
}
