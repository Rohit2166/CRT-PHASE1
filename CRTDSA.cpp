#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include <climits>
using namespace std;

// ARRAY 
// input in array

// int main(){
//     int n;
//     cout<<"enter size  ";
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// reverse of an array

// int main(){
//     int n;
//     cout<<"enter size  ";
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

// reverse of an array using function

// void reverse(int arr[],int n){
//     int l=0;
//     int r=n-1;
//     while(l<r){
//         // swap(arr[l],arr[r]);
//         int temp=arr[l];
//         arr[l]=arr[r];
//         arr[r]=temp;
//         l++;
//         r--;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter size ";
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// character array

// int main(){
//     char arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Sum of array elements

// int main(){
//     int n;
//     cout<<"enter size  ";
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];    
//     }
//     cout<<"Sum of array elements is: "<<sum;
// }

// Bubble sort in c++
// time complexity of bubble sort is O(n^2) and space complexity is O(1)

// int main(){
//     int a;
//     cin>>a;
//     int arr[10];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a-1;i++){
//         for(int j=0;j<a-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Selection sort in c++
// time complexity of selection sort is O(n^2) and space complexity is O(1)

// int main(){
//     int a;
//     cin>>a;
//     int arr[10];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<a;i++){
//         int minindex=i;
//         for(int j=i+1;j<a;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[minindex];
//         arr[minindex]=temp;
            // or we can also write as
//         swap(arr[i],arr[minindex]);
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Insertion sort in c++
// time complexity of insertion sort is O(n^2) and space complexity is O(1)

// int main(){
//     int a;
//     cin>>a;
//     int arr[10];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<a;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 





