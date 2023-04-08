#include<stdio.h>
int main(){

    int n;
    printf("Enter the three digit number : ");
    scanf("%d", &n);
    int temp = n;
    int num = 0;
    while(n>0){
        int digit = n % 10;
        num = num + digit * digit * digit;
        n = n / 10;
    }
    if(temp == num){
        printf("THis is an armstrong number");
    }
    else{
        printf("This is not a armstrong number");
    }


    return 0;
}