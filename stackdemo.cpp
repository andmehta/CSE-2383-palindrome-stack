/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler Used: eclipse
 *
 * program description:
 * 		use a stack to check if a string is a palindrome
 *
 * 		This is the test file
 */

#include "stack.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


string cleanup(string p);
bool isPalindrome(string p);

int main()
{
	//actual palindromes
	string palindrome1 = "no word, no bond, row on";
	string palindrome2 = "noon"; //even number of char
	string palindrome3 = "step on no pets"; //even number of char
	string palindrome4 = "mom";

	//not actual palindromes
	string notpalindrome1 = "bacon strips";
	string notpalindrome2 = "this is not a palindrome";
	string notpalindrome3 = "this is a lot of test cases";
	string notpalindrome4 = "I do not like this";
	string notpalindrome5 = "running out of ideas";
	string notpalindrome6 = "finally";


	//first remove unnecessary characters and spaces
	string clean_palindrome1 = cleanup(palindrome1);
	string clean_palindrome2 = cleanup(palindrome2);
	string clean_palindrome3 = cleanup(palindrome3);
	string clean_palindrome4 = cleanup(palindrome4);

	string clean_notpalindrome1 = cleanup(notpalindrome1);
	string clean_notpalindrome2 = cleanup(notpalindrome2);
	string clean_notpalindrome3 = cleanup(notpalindrome3);
	string clean_notpalindrome4 = cleanup(notpalindrome4);
	string clean_notpalindrome5 = cleanup(notpalindrome5);
	string clean_notpalindrome6 = cleanup(notpalindrome6);


	//first 4 are palindromes, will be a bunch of 1's
	cout << isPalindrome(clean_palindrome1) << "\t";
	cout << isPalindrome(clean_palindrome2) << "\t";
	cout << isPalindrome(clean_palindrome3) << "\t";
	cout << isPalindrome(clean_palindrome4) << endl;

	//last 6 are NOT palindromes and will output a bunch of zeros
	cout << isPalindrome(clean_notpalindrome1) << "\t";
	cout << isPalindrome(clean_notpalindrome2) << "\t";
	cout << isPalindrome(clean_notpalindrome3) << "\t";
	cout << isPalindrome(clean_notpalindrome4) << "\t";
	cout << isPalindrome(clean_notpalindrome5) << "\t";
	cout << isPalindrome(clean_notpalindrome6) << endl;
}

//remove spaces and commas from potential palindrome
string cleanup(string p)
{
	for(int i = 0; unsigned(i) < p.size(); i++)
	{
		if (p[i] == ' ' || p[i] == ',')
		{
			p.erase(i, 1);
			i = 0; //reset to beginning to catch deleted spaces
		}

	}

	return p;
}

bool isPalindrome(string p)
{
	stack p_stack;

		//add each character in the string to the stack
		for (int i = 0; unsigned(i) < p.size(); i++)
		{
			p_stack.push(p[i]); //make the stack with each character
		}

		//set a string equal to the returned string of ToString function
		string test = p_stack.ToString();

		//if that string is the same as the inputted stream it means it is the same reversed
		return (p == test);
}
