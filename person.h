#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>


using namespace std;

class Person
{
private:
    string* NidNumber;
    const string* PhoneNumber;
   // string* OperatorName;
public:
    string* OperatorName;
    Person(int);
    ~Person();
    void setNidNumber(int, string);
   // void setPhoneNumber(int, string);
    void setOperatorName(int, string);
    string getNidNumber(int);
    string getPhoneNumber(int);
    string getOperatorName(int);
    void printInformation();

};

#endif // PERSON_H_INCLUDED
