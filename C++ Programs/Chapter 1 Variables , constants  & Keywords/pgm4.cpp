// Convert the data type into another

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int a = 23;
    double b= 34.5;

    cout<<(float)a<<endl;
    cout<<b<<endl;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
}