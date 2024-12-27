// #include<iostream>
// using namespace std;
// int main() {
//     int marks[50];
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//     int marks[50] = {1, 2, 3};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//     int marks[] = {1, 2, 3}; 
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5] = {7, 5, 2, 1, 3};
//     int len = sizeof(arr) / sizeof(int);
    
//      for(int idx=0; idx<=len-1; idx++) {
//          cout<<arr[idx]<<" ";
//     }
//     cout<<endl;
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5] = {7, 5, 2, 1, 3};
//     int n = sizeof(arr) / sizeof(int);

//        for(int i=0; i<n; i++)  {
//         cout<<arr[i]<<" ";
//          }
//          cout<<endl;
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[25] = {7, 5, 2, 1, 3};
//     int n = sizeof(arr) / sizeof(int);

//        for(int i=0; i<n; i++)  {
//         cout<<arr[i]<<" ";
//          }
//          cout<<endl;
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter length of array : ";
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<=n; i++) {
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<", ";
//     }
//     cout<<endl;
//     return 0;
// }

// FIND LARGEST IN ARRAY
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {5, 4, 3, 9, 12};
//     int n = sizeof(arr) / sizeof(int);
//     int max = arr[0];
//     for(int i=0;i<n;i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//         }
//     }
//     cout<<"largest = "<<max<<endl;
//     return 0;
// }

// FIND SMALLEST IN ARRAY
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {5, 4, 3, 9, 12};
//     int n = sizeof(arr) / sizeof(int);
//         int min = arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]<min) {
//                 min = arr[i];
//             }
//         }
//         cout<<"smallest = "<<min<<endl;
//         return 0;
//     }
// FIND SMALLEST & LARGST IN THE ARRAY.
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {5, 9, 10, 15};
//     int n = sizeof(arr) / sizeof(int);
//     int max = arr[0];
//     int min = arr[0];
//     for(int i=0;i<n;i++) {
//         if(arr[i]>max) {
//             max = arr[i];    
//         }
//         if(arr[i]<min) {
//             min = arr[i];
//         }
//     }
//     cout<<"largest = "<<max<<endl;
//     cout<<"smallest = "<<min<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int *ptr = &a;
//     cout<<ptr<<endl;

//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<*(arr);
// }
// BINARY SEARCH
// #include<iostream>
// using namespace std;

// int binSearch(int *arr, int n, int key) {
//     int st = 0, end = n-1;

//     while(st<=end) {
//         int mid = (st + end)/2;
//         if(arr[mid]==key) {
//             return mid;
//         } else if(arr[mid] < key) {
//             st = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {2, 4, 6, 8, 10,12,14,16};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<binSearch(arr, n, 12)<<endl;
//     return 0;
// }
// ARRAY POINTER
// #include<iostream>
// using namespace std;
  
//   int main() {
//     int x = 10;
//     int *ptr = &x;

//     int y = 25;
//     ptr = &y;
//     cout<<*ptr<<endl;
//     return 0;
//   }
// Pointer Airthmetic
// #include<iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int *ptr = &a;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr<<endl;
// }
// 
