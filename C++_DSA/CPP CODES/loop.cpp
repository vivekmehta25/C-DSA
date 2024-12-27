// #include<iostream>
// using namespace std;
// int main(){
//   int n = 4;
//     for(int i=1;i<=5;i++){
//         cout<<"Hello Vivek"<<endl;
//     }
// }
// Ques 1 : Print hello world'n' times. Takes 'n' as input from user.
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   for(int i=1;i<=n;i++){
  //       cout<<"hello world"<<endl;
  //   }
  // }
  // Ques 2 : Print number from 1 to 100.
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   for(int i=1;i<=100;i++){
  //     cout<<i<<"  ";
  //   }
  // }
  // Ques 3 : Print all the even numbers from 1 to 100.
  // method 1
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   for(int i=1;i<=100;i++){
  //     if(i%2==0) cout<<i<<"  ";
  //   }
  // }
  // method 2
  //   #include<iostream>
  // using namespace std;
  // int main(){
  //   for(int i=2;i<=100;i=i+2){
  //      cout<<i<<"  ";
  //   }
  // }
  // Ques 4 : Print the table of 19.
  //  METHOD 1  
    // #include<iostream>
    // using namespace std;
    // int main(){
    //   for(int i=19;i<=190;i++){
    //     if(i%19==0) cout<<i<<" ";
    //   }
    // }
    // METHOD 2
  //    #include<iostream>
  //   using namespace std;
  //   int main(){
  //  //  for(int i=19;i<=190;i=i+19)
  //      for(int i=19;i<=190;i+=19){
  //       cout<<i<<" ";
  //     }
  //   }
  // //Ques 5 : Print the table of'n'.Here 'n' is a integer which user will input.
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   for(int i=n;i<=n*10;i+=n){
  //     cout<<i<<"  ";
  //   }
  // }
  // Ques 6 : Display this AP - 1,3,5,7,9.. upto 'n' terms.
  // METHOD 1
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   for(int i=1;i<=2*n-1;i+=2){
  //     cout<<i<<"  ";
  //   }
  // }
  // Ques 7 : Display this AP 4,7,10,13,..... upto 'n' terms.
  // METHOD 1
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   for(int i=4;i<=3*n-1;i+=3){
  //     cout<<i<<"  ";
  //   }
  // }
  // METHOD 2
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   int a = 4;
  //   for(int i=1;i<=n;i++){
  //     cout<<a<<"  ";
  //     a = a+3;
  //   }
  // }
  // Ques 8 : Display this GP - 1,2,4,8,16,32,... upto 'n' terms.
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   int a = 1;
  //   for(int i=1;i<=n;i++){
  //     cout<<a<<" ";
  //     a = a*2;
  //   }
  // }
  // Ques : 9 Display this GP - 3,12,48,... upto 'n' terms.
  // #include<iostream>
  // using namespace std;
  // int main(){
  //   int n;
  //   cout<<"Enter n : ";
  //   cin>>n;
  //   int a = 3;
  //   for(int i=1;i<n;i++){
  //     cout<<a<<"  ";
  //     a = a*4;
  //   }
  // }
  // 
  // Ques : WAP to find the highest factor of a number 'n'(other than n itself)
    // #include<iostream>
    // using namespace std;
    // int main(){
    //   int n;
    //   cout<<"Enter n : ";
    //   cin>>n;
    //   for(int i=1;i<=n;i++){
    //     if(n%i==0) cout<<i<<" ";
    //   }
    // }
    // #include<iostream>
    // using namespace std;
    // int main(){
    //   int n;
    //   cout<<"Enter n : ";
    //   cin>>n;
    //   int f = 1; //store karunga highest factor
    //   for(int i=1;i<=n;i++){
    //     if(n%i==0) f = i;
    //   }
    //   cout<<f;
    //   }
    // Ques : WAP to find the factorial of a number entered by the user. 
    // #include<iostream>
    // using namespace std;
    // int main() {
    //   int n;
    //   cout<<"Enter number : ";
    //   cin>>n;
    //   for(int i=1;i<=n;i++) {
    //     cout<<(n*(n-1)*(n-2))<<" ";
    //   }
    //   return 0;
    // }
    