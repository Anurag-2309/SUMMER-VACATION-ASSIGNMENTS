#include<iostream>
using namespace std;
int main(){
    //TO CHECK NUMBER IS PRIME OR NOT
    int num,count=0;
    cout<<"enter the number=";
    cin>>num;
    for(int a=1;a<=num;a++){
    if(num %a==0){
    count++;}
    }
    if(count==2){
    cout<<"its is prime";}
    else{cout<<"it is not prime";}
    return 0;



}