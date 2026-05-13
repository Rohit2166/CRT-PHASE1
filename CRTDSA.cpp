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

//  two pointer 
//  two sum
// class solution{
//     public:
//     int twosum(vector<int> &arr,int target){
//         int l=0;
//         int r=arr.size()-1;
//         while(l<r){
//             if(arr[l]+arr[r]==target){
//                 cout<<l<<" "<<r<<endl;
//                 return 1;
//             }
//             else if(arr[l]+arr[r]>target){
//                 r--;
//             }
//             else{
//                 l++;
//             }
//         }
//         return -1;
//     }
// };
// int main(){
//     solution s;
//     int n;
//     cout<<"enter size ";
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cout<<"enter element "<<i<<" ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<" enter target ";
//     cin>>target;
//     s.twosum(arr,target);
// }
// time complexity of two sum is O(n) and space complexity is O(1)

// time complexity of two sum using brute force is O(n^2) and space complexity is O(1)
// class solution{
//     public:
//     int twosum(vector<int> &arr,int target){
//         int l=0;
//         int r=arr.size()-1;
//         for(int i=0;i<arr.size();i++){
//            for(int j=i+1;j<arr.size();j++){
//                if(arr[i]+arr[j]==target){
//                    cout<<i<<" "<<j<<endl;
//                    return 1;
//                }
//            }
//     }
// }
// };
// int main(){
//     solution s;
//     int n;
//     cout<<"enter size ";
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cout<<"enter element "<<i<<" ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<" enter target ";
//     cin>>target;
//     s.twosum(arr,target);
// }

// Linear Search in c++ 
// time complexity of linear search is O(n) and space complexity is O(1)
// int main(){
//     int arr[5]={1,3,5,6,8};
//     int target;
//     cin>>target;
//     for(int i=0;i<5;i++){
//         if(arr[i]==target){
//             cout<<"Element found at index "<<i<<endl;
//             return 0;
//         }
//     }
//     return -1;
// }

// Binary Search in c++
// time complexity of binary search is O(log n) and space complexity is O(1)
// int main(){
//     int arr[5]={1,3,5,6,9};
//     int target;
//     cin>>target;
//     int l=0;
//     int r=4;
//     while(l<=r){
//         int mid = l+(r-l)/2;
//         if(arr[mid]==target){
//             cout<<"element found at " <<mid<<endl;
//             return 0;
//         }
//         else if(arr[mid]>target){
//             r=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return -1;
// }

// Find First and Last Position of Element in Sorted Array leetcode 34
// time complexity of this problem is O(log n) and space complexity is O(1)
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int startingPosition = -1, endingPosition = -1;
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             if(nums[i] == target){
//                 startingPosition = i;
//                 break;
//             }
//         }
//         for(int i=n-1; i>=0; i--){
//             if(nums[i] == target){
//                 endingPosition = i;
//                 break;
//             }
//         }
//         return {startingPosition, endingPosition};
//     }
// };
// class Solution {
//     int lowerbound(vector<int>& nums, int target) {
//         int s = 0;
//         int l = nums.size() - 1;
//         int ans = -1;
//         while (s <= l) {
//             int mid = s + (l - s) / 2;
//             if (nums[mid] == target) {
//                 ans = mid;
//                 l = mid - 1;   // search left
//             }
//             else if (nums[mid] > target) {
//                 l = mid - 1;
//             }
//             else {
//                 s = mid + 1;
//             }
//         }
//         return ans;
//     }
//     int upperbound(vector<int>& nums, int target) {
//         int s = 0;
//         int l = nums.size() - 1;
//         int ans = -1;
//         while (s <= l) {
//             int mid = s + (l - s) / 2;
//             if (nums[mid] == target) {
//                 ans = mid;
//                 s = mid + 1;   // search right
//             }
//             else if (nums[mid] > target) {
//                 l = mid - 1;
//             }
//             else {
//                 s = mid + 1;
//             }
//         }
//         return ans;
//     }
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> arr;
//         int first = lowerbound(nums, target);
//         int last = upperbound(nums, target);
//         arr.push_back(first);
//         arr.push_back(last);
//         return arr;
//     }
// };
// int main(){
//     Solution s;
//     int n;
//     cout<<"enter size ";
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cout<<"enter element "<<i<<" ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<" enter target ";
//     cin>>target;
//     vector<int> ans = s.searchRange(arr, target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
// }

// brute force approach of this problem is O(n) and space complexity is O(1)
// int main(){
//     int arr[5]={1,3,7,7,9};
//     int target;
//     cin>>target;
//     int first=-1;
//     int last=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==target){
//             first=i;
//             break;
//         }
//     }
//         for(int j=4;j>=0;j--){
//             if(arr[j]==target){
//                 last=j;
//                 break;
//             }
//         }
//         cout<<first<<" "<<last<<endl;
// };

// 35. Search Insert Position leetcode
// time complexity of this problem is O(log n) and space complexity is O(1)
// int main(){
//     int arr[5]={2,4,5,6,8};
//     int target;
//     cin>>target;
//     int l=0;
//     int r=4;
//     while(l<=r){
//         int mid = l+(r-l)/2;
//         if(arr[mid]==target){
//             cout<< mid;
//             break;
//         }
//         else if(arr[mid]>target){
//             r=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     cout<< l;
//     return 0;
// }

// sum of elements of 2d array
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }   
//     }
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//             cout <<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Sum: "<<sum<<endl;
// }

// print 2 table with recursion
// int print(int a,int n){
//     // base case
//     if(a>n){ 
//         return 0;
//     }
//     cout<<2*a<<endl;
//     print(a+1,n);
//     return 0;
// };
// int main(){
//     int a=1;
//     print(a,10);
//     cout<<endl;
// }

// sum of digits question gfg 
// int sumofdigit(int n){
//     // base case
//     if(n==0){
//         return 0;
//     }
//     int sum=n%10;
//     return sum + sumofdigit(n/10);
// };
// int main(){
//     cout << sumofdigit(292) << endl; 
// }

// reverse an array with recursion
// int reverserray(int arr[],int s, int e){
//     // base case
//     if(s>=e){
//         return 0;
//     }
//     swap(arr[s],arr[e]);
//     reverserray(arr,s+1,e-1);
//     return 0;
// };
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     reverserray(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// 

