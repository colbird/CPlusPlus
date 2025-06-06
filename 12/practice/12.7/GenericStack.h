#ifndef STACK_H
#define STACK_H
#include <iostream>

template<typename T>
class Stack{
    public:
        Stack();
        bool empty() const;
        T peek() const;
        void push(T value);
        T pop();
        int getSize() const;
        void printStack() const;
        bool contains(const T& elements) const;
    private:
        T elements[100];
        int size;
};

template<typename T>
Stack<T>::Stack(){
    size = 0;
}

template<typename T>
bool Stack<T>::empty() const{
    return size == 0;
}

template<typename T>
T Stack<T>::peek() const{
    return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value){
    elements[size++] = value;
}

template<typename T>
T Stack<T>::pop(){
    return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const{
    return size;
}

template<typename T>
void Stack<T>::printStack() const{
    for (int i = 0; i < size; i++)
        std::cout << elements[i] << " ";
    std::cout << std::endl;
}

template<typename T>
bool Stack<T>::contains(const T& elements) const{
    for (int i = 0; i < size; i++){
        if (this -> elements[i] == elements)
            return true;
    }
    return false;
}

#endif
