#include<iostream>
using namespace std;

class Employee{
  
    int id;
    int salary;

    public:

        void setId(void){
           
            salary = 1222;
            cout<<"Enter the id:- ";
            cin>>id;
        }

        void getId(void){

            cout<<"The salary of the Employee of Id:- "<<id<<" is "<<salary<<endl;
        }
};

int main(){

    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}