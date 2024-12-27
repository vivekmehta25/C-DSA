// FUNCTION OVERLOADING
// #include<iostream>
// using namespace std;

// class Print {
//     public:
//     void show(int x) {
//         cout<<"int :  "<<x<<endl;
//     }
//     void show(string str) {
//         cout<<"string :  "<<str<<endl;
//     }
// };
// int main() {
//     Print obj1;
//     obj1.show(25);
//     obj1.show("vivek kumar");
//     return 0;
// }
// OPERATOR OVERLOADING
#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;
public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void showNum() {
        cout<<real<<" + "<<img<<"i\n";
    }

        // Operator Overloading
        void operator + (Complex &c2) {
            int resReal = this->real + c2.real;
            int resImg = this->img + c2.img;
            Complex c3(resReal, resImg);
            cout<<"res = ";
            c3.showNum();
    }
};
int main() {
    Complex c1(1, 2); 
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();
    c1+c2;
    return 0; 

}