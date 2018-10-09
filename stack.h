/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler Used: eclipse
 *
 * program description:
 * 		use a stack to check if a string is a palindrome
 *
 * 		This is the header file for stack and node
 */

#ifndef STACK_H_
#define STACK_H_

#include <string>
class node
{
	public:

		char data;
		node* below;

		//constructor
		node(char, node*);

};

class stack
{
	private:
		node* top;
		int size;

	public:

		//constructor
		stack();
		stack(char);

		//destructor
		~stack();

		//stack functions
		void push(char);
		int getsize(); //size of stack, mostly for test purposes
		char pop();
		std::string ToString();




};



#endif /* STACK_H_ */
