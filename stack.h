#ifndef STACK_H
#define STACK_H

// a simple implementation of a stack 
// practice with generic programing
template<class T>
class Stack {
private:
	T *stack;
	int size;
public:
	void push(T);
	T pop();
	T peek();
}
#endif
