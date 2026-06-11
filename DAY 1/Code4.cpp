#include<iostream>
using namespace std;
int main(){
    int num,digit=0;
    cout<<"enter the value of number";
    cin>>num;
    while(num>=1){
        num/=10;
        digit++;
    }
    cout<<"digits="<<digit;
    return 0;
}