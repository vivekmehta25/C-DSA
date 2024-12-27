// #include<iostream>
// using namespace std;

// class Student {
//     // Properties
//     string name;
//     float cgpa;
//     // Methods
//     void getPercentage() {
//         cout<<(cgpa*10)<<"%\n";
//     }
// };
// int main() {
//     Student s1; //objecct
//     cout<<sizeof(s1)<<endl;
//     return 0;
// }.
// #include<iostream>
// using namespace std;

// class Student {
//     public:
//     string name;
//     float cgpa;
//     void getPercentage() {
//         cout<<(cgpa*10)<<"%\n";
//     }
// };
// int main() {
//     Student s1;
//     s1.name ="Vivek";
//     cout<<s1.name<<endl;
//     s1.cgpa = 9.1;
//     cout<<s1.cgpa<<endl;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    void getPercentage() {
        cout << (cgpa * 10) << "%\n";
    }
    // Setters
    void setName(string nameVal) {
        name = nameVal;
    }
    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal; // Corrected line
    }   
    // Getters
    string getName() {
        return name;
    }
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Vivek");
    s1.setCgpa(9.1);
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}
