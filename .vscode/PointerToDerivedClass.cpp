#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"The value of the BaseClass variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"The value of the Derived Class Variable var_derived "<<var_derived<<endl;
            cout<<"The value of the Base class variable var_base "<<var_base<<endl;
        }
};

int main(){

    BaseClass base_class_obj;
    DerivedClass derived_class_obj;

    BaseClass *base_class_pointer;
    base_class_pointer = &derived_class_obj;

    base_class_pointer->var_base=42;
    base_class_pointer->display();
    // base_class_pointer->var_derived = 134;

    base_class_pointer->var_base=3245;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &derived_class_obj;
    derived_class_pointer->var_base=10001;
    derived_class_pointer->var_derived=20002;
    derived_class_pointer->display();

    return 0;
}