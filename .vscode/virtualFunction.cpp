#include<iostream>
using namespace std;

class BaseClass{
    public:
    int base_var = 20;
    virtual void display(void){
        cout<<"Displaying The base class base_var "<<base_var<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int derived_var = 80;
    void display(void){
        cout<<"Displaying the base class base_var "<<base_var<<endl;
        cout<<"Displaying the derived class derived_var "<<derived_var<<endl;
    }
};

int main(){

   
    BaseClass base_class_obj;
    DerivedClass derived_class_obj;

    BaseClass *base_class_pointer;
    DerivedClass *derived_class_pointer;

    base_class_pointer = &derived_class_obj;
    base_class_pointer->display();

    return 0;
}