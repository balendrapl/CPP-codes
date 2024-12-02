#include <iostream>
using namespace std;

class A{
    string secret = "secret data";
    friend class B;
    friend void revealSecret (A &obj);  
};
class B{  //it becomes a friend fn
public:
    void showSecret(A &obj){
        cout << obj.secret << endl; // this show an error as secret is not accessible if we dont make B a friend class of A
    }
};
void revealSecret(A &obj){  //it becomes a friend fn
    cout << obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}