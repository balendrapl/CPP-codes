#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    int sum = a+b;
    int product = a*b;
    int diff = a-b;
    cout<<"Sum of a & b is : "<<sum<<endl;
    cout<<"Product of a & b is : "<<product<<endl;
    cout<<"Difference between a & b is : "<<diff<<endl;

    return 0;
}