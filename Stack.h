#ifndef STACK_H
#define STACK_H

// a simple implementation of a stack 
// practice with generic programing
template<class T>
class Stack {
private:
	T *stack;
	int height;
	int maxSize;
	void resize();
public:
	Stack();
	Stack(int s);
	~Stack();
	void push(T);
	T pop();
	T peek();
}
#endif
