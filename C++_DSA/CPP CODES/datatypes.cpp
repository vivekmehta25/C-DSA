// #include<iostream>
// using namespace std;
// int main(){
//     int age = 25;
//     int marks = -200;
//     char grade = 'A';
//     bool isAdult = true;

//     cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;
//     cout<<"size of int = "<<sizeof(int)<<endl;
//     cout<<"size of char = "<<sizeof(float)<<endl;
//     cout<<"size of bool = "<<sizeof(bool)<<endl;
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;

    cout<<setprecision(12)<<"PI = "<<PI<<endl;
    cout<<setprecision(12)<<"PI = "<<PI2<<endl;
    return 0;
} 