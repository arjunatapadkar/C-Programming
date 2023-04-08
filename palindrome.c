#include<stdio.h>
int main(){

    int n;
    printf("Enter the to check palindrome : ");
    scanf("%d", &n);
    

    int temp = n;
    int t=0;
    while(n>0){
        int digit = n % 10;
        t = t * 10 + digit;
        n = n / 10;
    }
    if(temp == t){
        printf("The given number is palindrome\n");
    }
    else{
        printf("The given number is not a palindrome number\n");
    }



    return 0;
}