#include "StackOfintegers.h"

StackOfintegers::StackOfintegers(){
	size = 0;
}

bool StackOfintegers::isEmpty() const{
	return !size;
}

int StackOfintegers::peek() const{
	return elements[size - 1];
}

void StackOfintegers::push(const int& value){
	elements[size++] = value;
}

int StackOfintegers::pop(){
	return elements[--size];
}

int StackOfintegers::getSize() const{
	return size;
}
