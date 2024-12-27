// #include<iostream>
// using namespace std;
// int main() {
//     int i=1;
//     while(i<3){
//     cout<<i<<" ";
//     i++;
// }
//     cout<<endl;
//     return 0;
//     }
// #include<iostream>
// using namespace std;
// int main() {
//     int i=10;
//     while(i<=25){
//     cout<<i<<" ";
//     i++;
// }
//     cout<<endl;
//     return 0;
//     }
// Ques : Print the square pattern using for loop.
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=1;i<=4;i++) {
//     cout<<"****"<<endl;
//     }
//      return 0;
// }
// Ques : print numbers from n to 1 using for loop.
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 12;
//     for(int i=n;i>=1;i--) {
//         cout<<i<<" ";
//     } 
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main() {
//     int n = 10829;
//     while(n>0) {
//         int lastDig = n % 10;
//         cout << lastDig << " ";
//         n = n/10;
//     }
//     cout << endl;
//     return 0;
// }
//  Ques : print the sum of digits of a number using while loop.
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 10829;
//     int digSum = 0;
//     while (n>0) {
//         int lastDig = n % 10;
//         digSum += lastDig;
//         n = n/10;
//     }   
//     cout<<"sum = "<<digSum<<endl;
//     return 0;
// }
// Ques : Print the sum of odd digits of a number using while loop.
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 12345;
//     int digSum = 0;
//     while(n>0) {
//         int lastDig = n % 10;
//         if(lastDig % 2 != 0) {
//         digSum +=lastDig;  // digSum = digSum + lastDig;
//     }    
//     n = n/10;
//     }
//     cout<<"sum = "<<digSum<<endl;
//     return 0;
// }
// Ques : Print digits of a given number in reverse using while loop . 
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 12345;
//     while(n>0) {
//         int lastDig = n % 10;
//         cout << lastDig;
//        n /= 10;  // n = n/10;
//     }
//     cout<<endl;
//     return 0;
// }
// Ques : Reverse a given number & print the result.
#include<iostream>
using namespace std;
int main() {
    int n = 12345;
    int res = 0;
    while(n>0) {
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n = n/10;
        }
        cout<<"reverse = "<<res<<endl;
        return 0;
}