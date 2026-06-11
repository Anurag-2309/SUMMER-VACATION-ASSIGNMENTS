#include<iostream>
using namespace std;
int main (){
    int digit;
    cout<<"enter the value of digits=";
    cin>>digit;
    int rem,sum=0;
    while(digit!=0){
        rem=digit%10;
        sum=sum+rem;
        digit=digit/10;
    }
    cout<<"the sum of digits is="<<sum<<endl;
    return 0;
}