#include <iostream>
#include "person.h"
#include "customer.h"
//#include "customer.cpp"

using namespace std;

struct PersonInfo {
string NID;
string PhoneNumb[15];
string Operator[15];

}PersonStructure[5];


int main()
{
    int size=2; // 2 people's information are hardcoded

    //Person1 Info

    PersonStructure[5];
    PersonStructure[0].NID = "1711042642";
    PersonStructure[0].PhoneNumb[0] = "01711167395";
    PersonStructure[0].Operator[0] = "Grameen Phone";

    PersonStructure[0].PhoneNumb[1] = "01712257295";
    PersonStructure[0].Operator[1] = "Grameen Phone";

    PersonStructure[0].PhoneNumb[2] = "01986064381";
    PersonStructure[0].Operator[2] = "Banglalink";

    PersonStructure[0].PhoneNumb[3] = "01515241313";
    PersonStructure[0].Operator[3] = "Teletalk";

    //Person2 Info

    PersonStructure[1].NID = "1711640042";
    PersonStructure[1].PhoneNumb[0] = "01789328471";
    PersonStructure[1].Operator[0] = "Grameen Phone";

    PersonStructure[1].PhoneNumb[1] = "01813434578";
    PersonStructure[1].Operator[1] = "Robi";

    PersonStructure[1].PhoneNumb[2] = "01972457584";
    PersonStructure[1].Operator[2] = "Banglalink";

    PersonStructure[1].PhoneNumb[3] = "01582384728";
    PersonStructure[1].Operator[3] = "Teletalk";

    PersonStructure[1].PhoneNumb[4] = "01873563757";
    PersonStructure[1].Operator[4] = "Robi";

    Person p(size);
    p.setNidNumber(1,PersonStructure[0].NID);
    string Nidtemp[2];
    Nidtemp[0] = p.getNidNumber(1);
    cout<<"First Person's Informations : "<<endl;
    cout<<"NID:"<<Nidtemp[0]<<endl;
    //int array_length1;
    //array_length1 = end(PersonStructure[0].PhoneNumb) - begin(PersonStructure[0].PhoneNumb);
    //cout<<array_length1;
    for(int index =0;index<15;index++)
    {
        if(PersonStructure[0].PhoneNumb[index]=="")
            break;
        cout<<(index+1)<<".Number: "<<PersonStructure[0].PhoneNumb[index]<<"  Operator: "<<PersonStructure[0].Operator[index]<<endl;

    }

    cout<<"\n\nSecond Person's Informations : "<<endl;
    cout<<"NID:"<<Nidtemp[1]<<endl;
    for(int index =0;index<15;index++)
    {
        if(PersonStructure[1].PhoneNumb[index]=="")
            break;
        cout<<(index+1)<<".Number: "<<PersonStructure[1].PhoneNumb[index]<<"  Operator: "<<PersonStructure[1].Operator[index]<<endl;

    }

    int variable,index1,index2;
    string nid;
    cout<<"Press 1 to change operator or press 2 to exit"<<endl;
    cin>>variable;
    if(variable==1)
    {
        cout<<"Enter the person's NID: "<<endl;
        cin>>nid;
        for( index1=0;index1<5;index1++)
        {
            if(PersonStructure[index1].NID==nid)
                cout<<"Person's Numbers are: "<<endl;
                for(int index =0;index<15;index++)
                {
                    if(PersonStructure[index1].PhoneNumb[index]=="")
                    break;
                    cout<<(index+1)<<".Number: "<<PersonStructure[index1].PhoneNumb[index]<<"  Operator: "<<PersonStructure[index1].Operator[index]<<endl;

                }
                break;

        }
    }
    cout<<"Type the number you want to change the operator: "<<endl;
    string tempNumber;
    cin>>tempNumber;
    for( index2=0;index2<15;index2++)
    {
        if(PersonStructure[index1].PhoneNumb[index2]==tempNumber)
        {
            cout<<"Operator: "<<PersonStructure[index1].Operator[index2]<<endl;
            break;
        }

    }
    string changeOperaTor;
    cout<<"Enter the operator you want to switch:"<<endl;
    cin>>changeOperaTor;
    cout<<"Operator changed successfully"<<endl;

    /*Customer c(size);

    c.ChangeOperator(index2, changeOperaTor);

    */





}
