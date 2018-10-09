/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler Used: eclipse
 *
 * program description:
 * 		use a stack to check if a string is a palindrome
 *
 * 		This is the implementation of the stack and node classes
 */

#include "stack.h"
#include <string>


//node constructor
node::node(char d, node* new_ptr)
{
	data = d;
	below = new_ptr;
}


//stack constructor
stack::stack()
{
	//initialize first in the stack to nullptr
	top = nullptr;
	size = 0;
}

stack::stack(char c)
{
	node* top_ptr = top;
	top = new node(c, top_ptr);
	size = 1;
}

//stack destructor
stack::~stack()
{
	while (top != nullptr)
	{
		node* temp_ptr = top->below;
		delete top;
		top = temp_ptr;
	}
}

//return the current size of the stack
int stack::getsize()
{
	return size;
}


//create a new node in the stack
void stack::push(char d)
{
	node* newptr = top; //make a pointer to old top
	top = new node(d, newptr); //make a new node with a pointer pointing to old top
	size++; //increase stack count
}

//pop top value from stack
char stack::pop()
{
	if (size == 0) //if stack is empty
	{
		return '-';
	}
	else
	{
		node* temp_ptr = top->below; //hold prev ptr
		char val = top->data; //store data value
		delete top; //delete pointer to most recent value
		top = temp_ptr; //re assign pointer
		size--; //decrement stack count

		return val;
	}
}

std::string stack::ToString()
{
	std::string reverse_string;

		while(size != 0)
			{
				reverse_string += this->pop();
			}
	return reverse_string;
}
