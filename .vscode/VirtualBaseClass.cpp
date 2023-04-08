#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;

    public:
        void set_number(int a){
            roll_no = a;
        }
        void printNumber(void){
            cout<<"Your roll Number is : "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;

    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void printMarks(void){
            cout<<"Your result is here: "<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        int score;
    public:
        void set_score(int a){
            score = a;
        }
        void printScore(void){
            cout<<"Your score PT is : "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    protected:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout<<"Your Total Result is : "<<total<<endl;
        }
};

int main(){
    Result Arjun;
    Arjun.set_number(2);
    Arjun.set_marks(93, 87);
    Arjun.set_score(95);
    Arjun.display();
    return 0;
}