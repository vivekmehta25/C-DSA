// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     int *ptr = &a;
//     float pi = 3.14;
//     float *ptr2 = &pi;
//     cout<< sizeof(ptr)<<"\n";
//     cout<< sizeof(ptr2)<<"\n";
//     // cout<<&pi<<"="<<ptr2<<"\n";
//     // cout<<&a<<" = "<<ptr<<"\n";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {

//     int a = 10;
//     int *ptr = &a;

//     int **pptr = &ptr;
//     cout<<&ptr<<" = "<<pptr<<"\n";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {

//     int a = 10;
//     int *ptr = &a;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";
//     *ptr = 20;
//     cout<<a<<"\n";
//     return 0;
// }
// NULL POINTER
// #include<iostream>
// using namespace std;
// int main() {
//     int *ptr = NULL;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";  //segmentation fault
//     cout<<"bye";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void changeA(int *ptr) {
//     *ptr = 20;
//     cout<<*ptr<<"\n";
// }
// int main() {
//     int a = 10;
//     int &b = a;
//     b = 25;
//     cout<<b<<"\n";
//     cout<<a<<"\n";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void changeA(int &param) {
//     param = 20;
//     cout<<param<<"\n";
// }
// int main() {
//     int a = 10;
//     int &b=a;
//     changeA(a);
//     cout<<a<<"\n";
//     return 0;
// }
// QUES : What will ptr2 point to in the following code:
// #include<iostream>
// using namespace std;
// int main(){
// int x = 5, y = 10;
// int *ptr1 = &x, *ptr2 = &y;
// ptr2 = ptr1;
// cout<<ptr2<<"\n";
// cout<<ptr1<<"\n";
// cout<<&x<<"\n";
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//    int x;
//    int *ptr;
//    x = 7;
//    ptr = &x;
//    cout<< *ptr;
//     return 0;
// }

// #include<iostream>
// using namespace std;

//     void multipleBy2(int &a, int &b, int &c) {
//         a *= 2;
//         b *= 2;
//         c *= 2;
//     }
// int main() {
//     int x = 1, y = 2, z = 3;
//     multipleBy2(x, y, z);
//     cout<<x<<y<<z<<"\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 32;
//     int *ptr = &a;
//     char ch = 'A';
//     char &cho = ch;

//     cho += a;
//     *ptr += ch;
//     cout<<a<<", "<<ch<<endl;
// }

#include<iostream>
using namespace std;
int main() {
    int *ptr = 0;
    cout<<ptr<<endl;
    return 0;
}
