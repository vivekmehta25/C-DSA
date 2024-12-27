#include<iostream>
using namespace std;

class vivekparent {
    public :
    void vivekparents() {
        cout<<" Parent Name : Om Prakash Mehta"<<endl;
        cout<<" Parent Home : Supaul \n";
    }
};
class childDetail : public vivekparent {
    public :
    void childdetails() {
        cout<<"Child Name : Vivek kumar"<<endl;
        cout<<"Child Age : 21"<<endl;
    }
};
class childSport : public childDetail {
    public :
    void sportsdetails() {
        cout<<"Sports Detail : Batminton"<<endl;
        cout<<"Sports Time : 2 hours"<<endl;
        cout<<"Sports TIme : 4 pm"<<endl; 
    }
};
int main() {
    cout<<"*************Details***************"<<endl;
    childSport s;
    s.vivekparents();
    s.childdetails();
    s.sportsdetails();
    return 0;
}
