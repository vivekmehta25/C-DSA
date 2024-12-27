// #include<iostream>
// using namespace std;

// class Sum {
//     int n1, n2, S;
// public:
//     void get_data()
//     {
//         cout<<"Enter number 1 : ";
//         cin>>n1;
//         cout<<"Enter number 2 : ";
//         cin>>n2;
//     }
//     void cal() {
//         S = n1+n2;
//     }
//     void display() {
//         cout<<"The sum of n1 & n2 is : "<<S<<endl;
//        }
//     };
//     int main() {
//         Sum s;
//         s.get_data();
//         s.cal();
//         s.display();
//         retur

// #include<iostream>
// using namespace std;

// class Area {
//     private:
//     int l, b, ans;
//     public:
//     Area(int x, int y)
//      {
//         l = x;
//         b = y;
//      }
     
//         void result() {
//             ans = l*b;
//         }
//         void disp() {
//             cout<<"area : "<<ans;
//         }
//     };
//     int main() {
//         Area a(2, 4);
//         a.result();
//         a.disp();
//         return 0;
//     }
// COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class A {
//     int x, y;
//     public:
//     A(int i, int j) {
//         x = i;
//         y = j;
//     }
//     int getX() {
//         return x;
//     }
//     int getY() {
//         return y;
//     }
// };
// int main() {
//     A obj1(10, 40);
//     A obj2 = obj1;
//     cout<<"x = "<<obj2.getX()<<"y = "<<obj2.getY();
//     return 0;

// }
#include<iostream>
#include<string>
using namespace std;

class Bike {
    public:
    void honda() {
        string colour;
        cout<<"**Honda**"<<endl;
        cout<<"Black"<<endl;
        string model;
        cout<<"B 6"<<endl;
        string fuel_type;
        cout<<"Petrol"<<endl;
    }
};
class Super_bike : public Bike {
    public:
    void electric_bike() {
    cout<<endl;
    cout<<"**Electric Bike**"<<endl;
    cout<<"Red"<<endl;
    cout<<"B 7"<<endl;
    cout<<"Electric"<<endl;
    }
};
int main() {
    Super_bike b;
    b.honda();
    b.electric_bike();
    return 0;
}

    





