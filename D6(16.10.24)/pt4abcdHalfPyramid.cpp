// Alphabet character pyramid

#include <iostream>
using namespace std;

int main(){
    int n=8;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // for below 2 lines we can directly use --> cout << ch++ //bcoz this is post increament i.e pehle purani value use hogi then value update hogi
            cout <<ch <<" ";
            ch++; 
        }cout << endl;
    }
    return 0;
}