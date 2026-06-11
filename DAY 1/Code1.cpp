#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout<<"enter the number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){

sum=sum+i;
    }
    cout<<"the sum of number is="<<sum;
    return 0;
}