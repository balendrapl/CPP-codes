#include <iostream>
using namespace std;
int main(){
    float PI =3.14;
    cout<<(int)(PI)<<endl; //3
    cout<<((float)10/3)<<endl; //3.33333
    cout<<(10/(float)3)<<endl;   //here & in above line kisi no. ke pehle datatype likhne se vousi datatype ka ban jata h & agar no. ke piche likhenge to error aega
    cout<<(char)('A' + 2)<<endl; //B
    cout<<(bool)5 + 7 <<endl;
    return 0;
}