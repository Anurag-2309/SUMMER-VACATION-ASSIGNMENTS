#include<iostream>
using namespace std;
int main(){
    int num,product=1;
    cout<<"enter the value of number=";
    cin>>num;
    while(num>0){
        product=product*(num%10);
        num=num/10;
    }
    cout<<"product of the given number is="<<product;
    return 0;

    
}