#include "person.h"

Person::Person(int size)
{
    NidNumber = new string[size];
    PhoneNumber = new string[size];
    OperatorName = new string[size];
}
void Person::setNidNumber(int index, string NID)
{
    NidNumber[index] = NID;
}
/*void Person::setPhoneNumber(int index, string Number)
{
    PhoneNumber[index] = Number;
}*/
void Person::setOperatorName(int index, string Operator)
{
    OperatorName[index] = Operator;
}
string Person::getNidNumber(int index)
{
    return NidNumber[index];
}
string Person::getPhoneNumber(int index)
{
    return PhoneNumber[index];
}
string Person::getOperatorName(int index)
{
    return OperatorName[index];
}
Person::~Person()
{
    delete[] NidNumber;
    delete[] PhoneNumber;
    delete[] OperatorName;
}

