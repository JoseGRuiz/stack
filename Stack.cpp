#include "Stack.h"

//default construcor initialize to 10
Stack::Stack(){
	maxSize = 10;
	stack = new T[maxSize];
	height = -1;
}

//constructor with given maxSize
Stack::Stack(int s){
	maxSize = s;
	stack = new T[maxSize];
	height = -1;
}

//destructor
Stack::~Stack(){
	delete[] stack;
}

//push to the stack
void Stack::push(T obj){
	//make sure the array can hold it
	if(height + 1 > maxSize)
		resize();

	stack[++height] = obj;
}

//pops top element off the stack
T Stack::pop(){
	return stack[height--];
}

//peek the top element without poping
T Stack::peek(){
	return stack[height];
}

//resize the internal array to hold more elements
void Stack::resize(){
	//double the maxSize
	//and create a temp array of that new size
	maxSize *= 2;
	T *temp = new T[maxSize];
	//copy old values to new
	for(int i = 0; i <= height; i++)
		temp[i] = stack[i];
	//clean up the old array
	//and point the stack to the new array
	delete[] stack;
	stack = temp;
}


