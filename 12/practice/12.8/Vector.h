#ifndef VECTOR_H
#define VECTOR_H

template<class T>
class Vector{
    public:
        Vector();
        Vector(const int& size);
        Vector(const int& size, const T& defaultValue);
        ~Vector();
        void push_back(const T& data);
        void pop_back();
        int size() const;
        T at(int size) const;
        bool empty() const;
        void  clear();
        void swap(Vector& data);
        int limit()const;
    private:
        T* Elements;
        int Size;
        int Limit;
        void ensureLimit();
};

template<typename T>
Vector<T>::Vector(): Size(0), Limit(0){
    Elements = new T[Limit];
}

template<typename T>
Vector<T>::Vector(const int& size): Size(0), Limit(size){
    Elements = new T[size];
}

template<typename T>
Vector<T>::Vector(const int& size, const T& defaultValue): Size(size), Limit(size){
    Elements = new T[size];
    for (int i = 0; i < size; i++)
        Elements[i] = defaultValue;
}

template<typename T>
Vector<T>::~Vector(){
    delete [] Elements;
}

template<typename T>
void Vector<T>::push_back(const T& data){
    ensureLimit();
    Elements[Size++] = data;
}

template<typename T>
void Vector<T>::pop_back(){
    --Size;
}

template<typename T>
int Vector<T>::size() const{
    return Size;
}

template<typename T>
T Vector<T>::at(int size) const{
    return Elements[size];
}

template<typename T>
bool Vector<T>::empty() const{
    return Size == 0;
}

template<typename T>
void Vector<T>::clear(){
    Size = 0;
}

template<typename T>
void Vector<T>::swap(Vector& data){
    T* oldVector1 = Elements;
    T* oldVector2 = data.Elements;

    Limit = data.Size;
    data.Limit = Size;

    Size = Limit;
    data.Size = data.Limit;

    data.Elements = new T[data.Limit];
    Elements = new T[Limit];

    for (int i = 0; i < Limit ; i++){
        oldVector2[i] = Elements[i];
    }

    for (int i = 0; i < data.Limit ; i++){
        oldVector1[i] = data.Elements[i];
    }

    delete [] oldVector1;
    delete [] oldVector2;
}

template<typename T>
void Vector<T>::ensureLimit(){
    if (Size >= Limit){
        T* oldVector = Elements;
        Limit = (Size ? Size * 2 : 1);
        Elements = new T[Limit];
        for (int i = 0; i < Size; i++){
            Elements[i] = oldVector[i];
        }
        delete [] oldVector;
    }
}

template<typename T>
int Vector<T>::limit()const{
    return Limit;
}

#endif
