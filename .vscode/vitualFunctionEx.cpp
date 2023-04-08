#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};

class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl) : CWH(s, r){
        videoLength = vl;
    }
    void display(){
        cout<<"This an amazing video with Title : "<<title<<endl;
        cout<<"Ratings : "<<rating<<" Out of 5 stars"<<endl;
        cout<<"The length of the video is "<<videoLength<<" minutes"<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc) : CWH(s, r){
        words = wc;
    }
    void display(){
        cout<<"This is an amazing Text Tutorial with title : "<<title<<endl;
        cout<<"Ratings of this Text Tutorial: "<<rating<<" Out of 5 star"<<endl;
        cout<<"Number of Words in this Text Tutorial is "<<words<<" words"<<endl;
    }
};

int main(){

    string title;
    float rating, vlen;
    int words;

    // For video Tutorial
    title = "Web Devlopment Tutorials";
    rating = 4.9;
    vlen = 23.45;
    CWHVideo WDvideo(title, rating, vlen);
    WDvideo.display();


    // For Text Tutorial
    title = "Web Devlopment Text Tutorials";
    rating = 4.5;
    words = 345;
    CWHText WDtext(title, rating, words);
    WDtext.display();

    CWH *tut[2];
    tut[0] = &WDvideo;
    tut[1] = &WDtext;

    tut[0]->display();
    tut[1]->display();

    return 0;
}