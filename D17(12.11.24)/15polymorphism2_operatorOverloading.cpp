#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;
public:
    Complex(int x, int y){
        real = x;
        img = y;
    }
    void showNum(){
        cout << "complex number = " << real << " + " << img << "i" << endl;
    }

    void operator + (Complex &c2){  // we can also take &obj
        int resultReal = this-> real + c2.real;
        int resultImg = this-> img + c2.img;
        Complex c3(resultReal, resultImg);
        c3.showNum();
    }

};


int main(){
    Complex c1(5,8);
    Complex c2(4,9);
    c1.showNum();
    c2.showNum();
    c1 + c2;
    return 0;
}