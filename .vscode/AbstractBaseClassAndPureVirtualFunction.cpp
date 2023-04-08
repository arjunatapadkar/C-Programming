#include<iostream>
#include<cstring>
using namespace std;

class CWH{
   protected:
   string title;
   float rating;
   public:
   CWH(string s, float r){
       rating= r;
       title = s;
   }
    virtual void display() = 0;
};

class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl) : CWH(s, r){
        videoLength = vl;
    }
    void display(){
        cout<<"The title of this amazing tutorial is : "<<title<<endl;
        cout<<"Rating : "<<rating<<endl;
        cout<<"VideoLength : "<<videoLength<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc) : CWH(s, r){
        words = wc;
    }
    void display(){
        cout<<"The title of this amazing Text Tutoeial is: "<<title<<endl;
        cout<<"Rating : "<<rating<<endl;
        cout<<"Words : "<<words<<endl;
    }
};

int main(){

    string title;
    int words;
    float rating,  videoLength;

    // For Video Tutorial
    title = " C++ Programming";
    rating = 4.99;
    videoLength = 45.45;
    CWHVideo CPTutorial(title, rating, videoLength);
    CPTutorial.display();

    // For Text Tutorial
    title = " C++ Text Tutorial";
    rating = 4.5;
    words = 5432;
    CWHText CPTutText(title, rating, words);
    CPTutText.display(); 

    CWH *tut[2];
    tut[0] = &CPTutorial;
    tut[1] = &CPTutText;

    tut[0] ->display();
    tut[1] ->display();

    return 0;
}