// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     a++; //6
//     cout << "a = "<< a<<endl;
//     a--; //5
//     cout << "a = "<<a<<endl;
//     return 0;
// }

/*normally a++ & ++a me koi different out put ni aaege
as you can see in below code*/
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     ++a; //6
//     cout << "a = "<< a<<endl;
//     --a; //5
//     cout << "a = "<<a<<endl;
//     return 0;
// }

/*but usko agar kisi variable se assign karde then 
we get different result*/
#include <iostream>
using namespace std;
int main(){
    int a = 5,b;
    b = a--; 
    cout << "a = "<< a<<endl;//4
    cout << "b = "<<b<<endl;//5
    return 0;
}


// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5,b;
//     b = --a; 
//     cout << "a = "<< a<<endl;//4
//     cout << "b = "<<b<<endl;//4
//     return 0;
// }