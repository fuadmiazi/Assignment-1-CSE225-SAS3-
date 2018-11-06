#include "customer.h"
#include <string>

using namespace std;


void Customer::ChangeOperator(int index, string OperatorChange)
{
    OperatorName[index] = OperatorChange;
}

