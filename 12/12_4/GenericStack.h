#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack{
    public:
        Stack();
        bool empty() const;
        T peek() const;
        void push(T value);
        T pop();
        int getSize() const;
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

#endif
