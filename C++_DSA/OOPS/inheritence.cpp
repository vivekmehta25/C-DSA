// #include<iostream>
// using namespace std;

// class Oriental {
//     public:
//     void student() {
//           cout<<"Name : ";
//     cout<<"Vivek kumar\n";
//     }
//     };
// class Class : public Oriental {
//     public:
//     void vivek() {
//         cout<<"pursuing B.Tech in Computer Science ";
//         cout<<"from Oist \n";
//     }
// };
// class Sem : public Class {
//     public:
//     void Vivek() {
//         cout<<"Sem : ";
//         cout<<"III (D)\n";
//     }
// };
// int main() {
//     Sem j;
//     j.student();
//     j.vivek();
//     j.Vivek();
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
//     public:
//     string colour;

//     void eat() {
//         cout<<"eats\n";
//     }
//     void breathe() {
//         cout<<"breathes\n";
//     }
// };
// class Human : public Animal {
//     public:
//     string height;

//     float aman() {
//         cout<<"Aman height : ";
//         cout<<"5.6 inch\n";
//         return 5.6;
//     }
// };
// int main() {
//         Human h;
//         h.eat();
//         h.breathe();
//         h.aman();
//         return 0;
//     }
// ṂULTIPLE INHERITANCE
// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
//     public:
//     int salary;
//     string subject;
// };
// class Student {
//     public:
//     int roll_no;
//     float cgpa;
// };
// class TA : public Teacher, public Student {
//     public:
//         string name;
// };
// int main() {
//     TA tal;
//     tal.name = "Vivek kumar";
//     tal.subject = "C++";
//     tal.cgpa = 9.1;

//     cout<<tal.name<<endl;
//     cout<<tal.subject<<endl;
//     cout<<tal.cgpa<<endl;

//     return 0;
// }
// MULTI LEVEL INHERITANCE
// #include<iostream>
// using namespace std;

// class Oriental {
//     public:
//     void teacher() {
//         cout<<"Nagendra Sir"<<endl;
//     }
// };
// class Student : public Oriental {
//     public:
//     void student() {
//     cout<<"Vivek kumar"<<endl;
//     }
// };
// class Cse : public Student {
//     public:
//     void branch() {
//         cout<<"Sem 3"<<endl;
//     }
// };
// int main() {
//     Cse obj;
//     obj.teacher();
//     obj.student();
//     obj.branch();
//     return 0;
// }
// SINGLE INHERITANCE
// #include<iostream>
// using namespace std;

// class Oriental {
//     public:
//     void student() {
//         cout<<"Vivek kumar"<<endl;
//     }
// };
// class CSE : public Oriental {
//     public:
//     void vivek() {
//         cout<<"pursuing B.Tech from OIST ";
//     }
// };
// int main() {
//     CSE c;
//     c.student();
//     c.vivek();
//     return 0;
// }

// HIERARICAL INHERITANCE
#include<iostream>
using namespace std;

class Animal {
    public:
    void eat() {
        cout<<"eats"<<endl;
    }
    void breathe() {
        cout<<"breathes"<<endl;
    } 
};
class Bird : public Animal {
    public:
    void fly() {
        cout<<endl;
        cout<<"**Bird**\n";
        cout<<"flies"<<endl;
    }
};
class Fish : public Animal {
    public:
    void swim() {
        cout<<endl;
        cout<<"**Fish**"<<endl;
        cout<<"swims"<<endl;
    }
};
class Mammal : public Animal {
    public:
    void walk() {
        cout<<endl;
        cout<<"**Mammal**\n";
        cout<<"walks"<<endl;
    }
};
int main() {
    Mammal m;
    m.eat();
    m.breathe();
     m.walk();

    Bird b;
    b.eat();
    b.breathe();
    b.fly();

    Fish f;
    f.eat();
    f.breathe();
    f.swim();
    
    return 0;
}
