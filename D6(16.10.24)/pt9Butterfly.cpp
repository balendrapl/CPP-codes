#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<< " ";
        }
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){          // if we run this loop from n to 1 then inner loops ke conditions me easy formula ban jate h
        for(int j=1; j<=n-i+1; j++){
            cout<< "*";
        }
        for(int j=2; j<2*i; j++){
            cout<< " ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}