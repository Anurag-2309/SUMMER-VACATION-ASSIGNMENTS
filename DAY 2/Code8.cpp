#include<iostream>
using namespace std;
int main(){
    int i,original,reverse=0;
    cout<<"enter number is palindrome or not=";
    cin>>i;
    original=i;
    while(i>0){
        reverse=(reverse*10)+i%10;
        i=i/10;

    }
    if(original=reverse){
        cout<<"the number is palindrom";
    }
    else{cout<<"the number is not palindrom";}
    return 0;
}