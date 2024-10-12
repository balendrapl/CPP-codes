// #include <iostream>
// using namespace std;
// int main(){
//      float PI = 3.14159265358979323;
//     double PI2 = 3.14159265358979323;

//     cout<<"PI = "<<PI<<endl;
//     cout<<"PI2 = "<<PI2<<endl;
//     return 0;
// }

// in above code we get same value but to get correct and more precise values we have to include iomanip file in which we use setprecision() function
// by default cout ki precision 5 tak hoti h but by setprecision(n) we can increase its precision upto n
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float PI = 3.14159265358979323;
    double PI2 = 3.14159265358979323;

    cout << setprecision(17) << "PI = " << PI << endl;
    cout << setprecision(17) << "PI2 = " << PI2 << endl; 
    //17 precision set karne par bhi output me sirf 15 tak hi si se print hoga bcoz double ki itni hi chamta h
    return 0;
}