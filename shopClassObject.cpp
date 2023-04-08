#include<iostream>
using namespace std;

class shop{
    int productid[100];
    int productprice[100];
    int counter;

    public:
        void initcounter(void) {counter = 0;}
        void setprice(void);
        void displayprice(void);
        void total(void);
};

void shop :: setprice(void){

    cout<<"Enter the product id of your product number "<<counter+1<<" :- \n";
    cin>>productid[counter];
    cout<<"Enter the price of the product:- \n";
    cin>>productprice[counter];
    counter++;
}

void shop :: displayprice(void){

    for (int  i = 0; i < counter; i++)
    {
        cout<<"The price of the product id "<<productid[i]<<" is :-"<<productprice[i]<<" Rs."<<endl;
    }
}

void shop :: total(void){

    int totalprice = 0;
    for (int i = 0; i < counter; i++)
    {
        totalprice += productprice[i];
    }
    cout<<"The Total price is :- "<<totalprice<<" Rs."<<endl;
}

int main(){

    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    dukaan.total();

    return 0;
}