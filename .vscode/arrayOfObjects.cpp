#include<iostream>
#include<string.h>
using namespace std;

class ShopItem{
    int id;
    string name;
    float price;
    public:
        void setData(int a,string ch, float b ){
            id = a;
            price = b;
            name = ch;
        }
        void getData(void){
            cout<<"The id : "<<id<<"  Name : "<<name<<" price : "<<price<<" INR"<<endl;
        }
};

int main(){

    int size;
    cout<<"How many items you want to set in a shop : "<<endl;
    cin>>size;

    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int id;
    float price;
    string name;
    for(int i=0; i<size;i++){
        cout<<"Enter the id, name and price of the item: "<<endl;
        cin>>id>>name>>price;
        // (*ptr).setData(id, price);
        ptr->setData(id, name, price);
        ptr++;
    }
    for(int i=0; i<size; i++){
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}