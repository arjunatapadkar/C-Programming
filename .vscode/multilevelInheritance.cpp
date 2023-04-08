#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    
    public:
        void set_roll_number(int);
        void get_roll_number();

};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The Roll Number of the Student Is : "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks( float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(void ){
    cout<<"The marks Obtained in maths are : "<<maths<<endl;
    cout<<"The marks obtained in physics are : "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void Display_results(void){
            get_roll_number();
            get_marks();
            cout<<"Your result is : "<<(maths + physics)/2<<"%"<<endl;
        }
};

int main(){

    Result Arjun, v;
    Arjun.set_roll_number(2);
    Arjun.set_marks(99, 90);
    Arjun.Display_results();
    v.set_roll_number(3);
    v.set_marks(87, 90);
    v.Display_results();
    return 0;
}