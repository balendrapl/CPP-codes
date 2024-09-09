#include <iostream>
using namespace std;
int main()
{
    float eng, sci, math;

    cout << "Enter English marks: ";
    cin >> eng;
    cout << "Enter Science marks: ";
    cin >> sci;
    cout << "Enter maths marks: ";
    cin >> math;
    float avg = (eng + sci + math) / 3;
    cout << "Average marks = " << avg;
    return 0;
}