// #include<iostream>
// using namespace std;
// void sayHello() {
//     cout<<"Hello : )\n ";
// }
// int main() {
//     sayHello();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void sayHello() {
//     cout<<"Hello :)\n";
// }
// void assistant() {
//     cout<<"workdone";
// }
// int main() {
//     sayHello();
//     assistant();
// }
// #include<iostream>
// using namespace std;

// int sum(int a, int b) {  //a, b are parameters
// int sum = a+b;
// return sum;    
// }
// int diff(int a, int b) {
// int diff = a-b;
// return diff;
// }
// int main() {
//     int s = sum(2, 4);  //2, 4 are arguments
//     cout<<"sum = "<<s<<endl;
//     int d = diff(4, 2); //4, 2 are arguments
//     cout<<"diff = "<<d<<endl;
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b = 1) {  //a, b are parameters
// int sum = a+b;
// return sum;    
// }
// int diff(int a, int b) {
// int diff = a-b;
// return diff;
// }
// int main() {
//     int s = sum(2, 5); 
//     cout<<"sum = "<<s<<endl;
   
//     return 0; 
// }
// Ques : WAF to find the product of 2 numbers a & b.
// #include<iostream>
// using namespace std;
// int prod(int a, int b) {
//     int p = a * b;
//     return p;
// }
// int main() {
//     int p = prod(20, 10);
//     cout<<"prod = "<<p<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int prod(int a, int b) {
//     return a*b;
// }
// int main() {
//     cout<<"prod : "<<prod(10, 20)<<endl; 
//     return 0;
// }
// QUES : WAP to print if a number is odd or even.
// #include<iostream>
// using namespace std;
// bool isEven(int n) {
//     if(n % 2 == 0) {
//         return true;
//     } else {
//         return false;
//     }
// }
// int main() {
//     cout<< isEven(20) << endl;
//     return 0;
// }
// QUES : WAP to find factorial of n.
// #include<iostream>
// using namespace std;
// int factorial(int n) {
//     int fact = 1;
//     for(int i=1;i<=n;i++) {
//         fact = fact*i;
//     }
//     cout<<"factorial(" <<n << ") = "<< fact << endl;
//     return fact;
// }
// int main() {
//     factorial(0);
//     factorial(1);
//     factorial(2);
//     factorial(3);
//     factorial(4);
//     factorial(5);
//     factorial(6);
//     return 0;
// }
// QUES : WAF to print if a number is not prime or not.
// #include<iostream>
// using namespace std;
// bool isPrime(int n) {
//     if(n==1) {
//         return false;
//     }
//     for(int i=2;i<=n-1;i++) {
//         if(n%i==0) {
//             return 0;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<< isPrime(22)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// bool isPrime(int n) {
//     if(n==1) {
//         return false;
//     }
//     for(int i=2;i*i<=n;i++) {
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<<isPrime(5)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// bool isPrime1(int n) {
//     if(n==1) {
//         return false;
//     }
//     for(int i=2;i<=n-1;i++) {
//         if(n%i==0) {
//             return 0;
//         }
//     }
//     return true;
// }
// bool isPrime2(int n) {
//     if(n==1) {
//         return false;
//     }
//     for(int i=2;i*i<=n;i++) {
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<<isPrime1(5)<<endl;
//     cout<<isPrime2(8)<<endl;
//         return 0;
// }
// QUES : WAP to find the binomial cofficient for given n & r.
//  #include<iostream>
//  using namespace std;
//  int factorial(int n) {
//     int fact = 1;
//     for(int i=1;i<=n;i++) {
//         fact *= i;
//     }
//     return fact;
//  }
//  int binCoff(int n, int r) {
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int result = val1 / (val2 * val3);
//     return result;
//  }
//  int main() {
//     cout<<binCoff(4, 2)<<endl;
//     return 0;
//  }
// FUNCTION OVERLOADING
// #include<iostream>
// using namespace std;

// int sum(int a, int b) {
//     cout<<(a+b)<<endl;
//     return a+b;
// }
// double sum(double a, double b) {
//     cout<<(a+b)<<endl;
//     return a+b;
// }
// int sum(int a, int b, int c) {
//     cout<<(a+b+c)<<endl;
//     return a+b+c;
// }
// int main() {
//     sum(2,3);
//     sum(12,13);
//     sum(1.5,2.5);
//     return 0;
// }
// QUES : Print all Primes in a range from 2 to n.
// #include<iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n == 1) {
//         return false;
//     }
//     for(int i=2;i*i<=n;i++) {
//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// void allPrimes(int n) {
//     for(int i=2;i<=n;i++) {
//         if(isPrime(i)) {
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main() {
//     allPrimes(200);
//     return 0;
    
// }
// QUES : Print all Primes in a range from 100 to 200;
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i=2;i*i<=n;i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
void allPrimes(int n) {
    for(int i=100;i<=n;i++) {
        if(isPrime(i)) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main() {
    allPrimes(200);
    return 0;
    
}