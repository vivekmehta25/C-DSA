// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=1;i<=10;i++){
//         if(i==3) {
//         continue;
//     }
//         cout<<i<<endl;
// }
// return 0;
// }
// Ques : Check if a number is prime or not.
#include<iostream>
using namespace std;
int main() {
    int n = 7;
    bool isPrime = true;
    for(int i=2;i<=n-1;i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        cout<<"number is Prime"<<endl;
    } else {
        cout<<"number is NOT Prime"<<endl;
    }
    return 0;
}
   