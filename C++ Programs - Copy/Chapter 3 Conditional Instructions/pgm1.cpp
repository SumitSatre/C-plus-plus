#include <iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;

    if(a%2==0){
        cout<<a<<" is even number";
    }
    else{
        cout<<a<<" is odd number";
    }
    return 0;
}