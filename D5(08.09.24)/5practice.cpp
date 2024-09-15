#include <iostream>
using namespace std;

int main(){
    int n=10829;
    int digSum =0;
    while(n>0){
        int lastDig = n%10;
        //cout << lastDig<< " ";  //to print digits in reverse order
        digSum += lastDig; 
        n = n/10;
    }
    cout<< "Sum of digitd = "<<digSum<<endl;
    return 0;
}