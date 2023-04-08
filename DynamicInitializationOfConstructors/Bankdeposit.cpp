#include<iostream>
using namespace std;

class BankDeposit{
    int principleAmount;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){};

        BankDeposit(int p, int y, float r);
        
        BankDeposit(int p, int y, int R);

        void showDetails();
};

BankDeposit :: BankDeposit(int p, int y, float r){

    principleAmount = p;
    interestRate = r;
    years = y;
    returnValue = principleAmount;

    for(int i=0; i<years; i++){
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){

    principleAmount = p;
    interestRate = float(r)/100;
    years = y;
    returnValue = principleAmount;
    for(int i=0; i<years; i++){
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: showDetails(){
    cout<<"The Return Value of your Principle Amount "<<principleAmount<<" with "<<interestRate<<" of Interest Rate for "<<years<<" years is : "<<returnValue<<endl;
}

int main(){

    BankDeposit bd1, bd2;

    int p;
    float r;
    int y;
    int R;

    cout<<"Enter the p, y and r(float) "<<endl;
    cin>>p>>y>>r;

    bd1 = BankDeposit(p, y, r);
    bd1.showDetails();

    cout<<"Enter the p, y and R(int) "<<endl;
    cin>>p>>y>>R;

    bd2 = BankDeposit(p, y, R);
    bd2.showDetails();

    return 0;
}