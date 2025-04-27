#include <iostream>
using namespace std;

class EvenNumber{
    private:
        int value;
    public:
        EvenNumber();
        EvenNumber(int);
        int getValue() const;
        EvenNumber getNext() const;
        EvenNumber getPrevious() const;
};

EvenNumber::EvenNumber(){
    value = 0;
}

EvenNumber::EvenNumber(int value){
    this -> value = value;
}

int EvenNumber::getValue() const{
    return value;
}

EvenNumber EvenNumber::getNext() const{
    if(value % 2)
        return EvenNumber(value + 1);
    else
        return EvenNumber(value + 2);

}

EvenNumber EvenNumber::getPrevious() const{
    if(value % 2)
        return EvenNumber(value - 1);
    else
        return EvenNumber(value - 2);

}

int main(){
    EvenNumber number1;
    EvenNumber number2(5);
    cout << number1.getPrevious().getValue() << endl;
    cout << number1.getNext().getValue() << endl;
    cout << number2.getPrevious().getValue() << endl;
    cout << number2.getNext().getValue() << endl;
    return 0;
}
