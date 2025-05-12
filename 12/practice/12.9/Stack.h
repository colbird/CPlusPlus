#ifndef STACK_H
#define STACK_H
#include <vector>

template<class T>
class Stack{
    public:
        Stack();
        bool empty()const;
        T peek() const;
        void push(const T& data);
        T pop();
        int getSize() const;
    private:
        std::vector<T> Vector;
};
 
template<typename T>
Stack<T>::Stack(){

}

template<typename T>
bool Stack<T>::empty() const{
    return Vector.size() == 0;
}

template<typename T>
T Stack<T>::peek() const{
    return Vector.at(Vector.size() - 1);
}

template<typename T>
void Stack<T>::push(const T& data){
    Vector.push_back(data);
}

template<typename T>
T Stack<T>::pop(){
    T temp = Vector.at(Vector.size() - 1);
    Vector.pop_back();
    return temp;
}

template<typename T>
int Stack<T>::getSize() const{
    return Vector.size();
}

#endif
