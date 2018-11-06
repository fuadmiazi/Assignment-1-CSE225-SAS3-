#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include <string>
#include "person.h"

using namespace std;

class Customer : public Person{

public:

    void ChangeOperator(int, string);

};


#endif // CUSTOMER_H_INCLUDED
