#ifndef STACTOFINTEGERS_H
#define STACTOFINTEGERS_H

const int STACK_MAX = 100;

class StackOfintegers{
	public:
		StackOfintegers();
		bool isEmpty() const;
		int peek() const;
		void push(const int& value);
		int pop();
		int getSize() const;
	private:
		int elements[STACK_MAX];
		int size;
};

#endif
