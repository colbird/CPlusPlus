#ifndef NONPOSITIVESIDEEXCEPTION_H
#define NONPOSITIVESIDEEXCEPTION_H
#include <stdexcept>
using namespace std;

class NonPositiveSideException: public logic_error{
    public:
        NonPositiveSideException(double side)
            : logic_error("Non-Positive side"){
            this -> side = side;
        }

        double getSide(){
            return side;
        }

    private:
        double side;

};

#endif
