// #include <iostream>
// using namespace std;

// int main(){
//     int day;
//     cout<< "enter day : ";
//     cin>>day;
//      if ( day == 1){
//         cout<<"Monday";
//      } else if ( day == 2){
//         cout<<"Tuesday";
//      } else if ( day == 3){
//         cout<<"Wednesday";
//      } else if ( day == 4){
//         cout<<"Thursday";
//      } else if ( day == 5){
//         cout<<"Friday";
//      } else if ( day == 6){
//         cout<<"Saturday";
//      } else if ( day == 7){
//         cout<<"Sunday";
//      } else {
//         cout<< "invalid day";
//      }
//     return 0;
// }



//by switch statement ---- to print all days just take "int day= 1" & comment out below 2 lines
// #include <iostream>
// using namespace std;

// int main(){
//     int day ;
//     cout<< "enter day : ";
//     cin>>day;

//     switch (day) {
//         case 1 : cout<< "Monday"<<endl;
//         case 2 : cout<< "Tuesday"<<endl;
//         case 3 : cout<< "Wednesday"<<endl;
//         case 4 : cout<< "Thursday"<<endl;
//         case 5 : cout<< "Friday"<<endl;
//         case 6 : cout<< "Saturday"<<endl;
//         case 7 : cout<< "Sunday"<<endl;
//         default : cout << "Invalid day"<<endl;
//     }
//     return 0;
// }


//for specific day by switch statement 
#include <iostream>
using namespace std;

int main(){
    int day ;
    cout<< "enter day : ";
    cin>>day;

    switch (day) {
        case 1 : cout<< "Monday"<<endl;
        break;
        case 2 : cout<< "Tuesday"<<endl;
        break;
        case 3 : cout<< "Wednesday"<<endl;
        break;
        case 4 : cout<< "Thursday"<<endl;
        break;
        case 5 : cout<< "Friday"<<endl;
        break;
        case 6 : cout<< "Saturday"<<endl;
        break;
        case 7 : cout<< "Sunday"<<endl;
        break;
        default : cout << "Invalid day"<<endl;
    }
    return 0;
}