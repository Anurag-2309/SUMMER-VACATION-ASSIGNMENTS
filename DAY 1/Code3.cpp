#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of number";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    
       cout<<"Answers is="<<factorial;
    

    
    return 0;

}