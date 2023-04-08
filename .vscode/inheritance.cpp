#include<iostream>
using namespace std;
// Creating a Base Class --> Employee.
class Employee{
    public:
        int id;
        float salary;
        // Creating a Parameterized Constructor.
        Employee(int inpId){
            id = inpId;
            salary = 56.0;
        }
        // Creating a Default Constructor.
        Employee(){}
};

//  Creating a Derived Class --> Programmer. inherited From Base Class --> Employee.
class programmer : public Employee{
    public:
        int languageCode;
        // Creating a Parameterized Constructor.
        programmer(int inpId, float inpSalary){
            id = inpId;
            languageCode = 10;
            salary = inpSalary;
        }
        // Creating a method Which does not take any kind of parameters and only outputs "id". 
        void getData(){
            cout<<id<<endl;
        }
};

int main(){

    Employee harry(1), rohan(2);
    cout<<harry.id<<"   "<<harry.salary<<endl;
    cout<<rohan.id<<"   "<<rohan.salary<<endl;

    programmer skill(20, 456);
    cout<<skill.languageCode<<endl;
    cout<<skill.id<<endl;

    skill.getData();
    cout<<skill.salary<<endl;

    return 0;

}