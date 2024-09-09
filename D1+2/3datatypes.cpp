#include <iostream>
using namespace std;
int main (){
    int age = 18;
    char grade = '@';
    bool isAdult = true;
   

    //remember the way we used to print these values in below line 
    cout<<age<<" "<<grade<<" "<<isAdult<<endl;//we get 0 if it is false
    cout<<"size of int ="<<sizeof(int)<<endl;
    cout<<"size of char ="<<sizeof(char)<<endl;
    cout<<"size of bool ="<<sizeof(bool)<<endl;
    cout<<"size of float ="<<sizeof(float)<<endl;
    cout<<"size of double ="<<sizeof(double)<<endl;
    

   
    return 0;
}