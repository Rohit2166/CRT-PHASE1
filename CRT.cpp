#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include <climits>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the pattern: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<< j;
//         }
//         cout<<endl;
//     }   
// }

/*(1
 12
 123
 1234
 123
 12
 1 pattern print)
 */

// int main(){
//     int n;
//     cout<<"Enter the size  ";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<< j;
//         }
//         cout<<endl;
//     }
//     for(int i=n-2;i>=0;i--){
//         for(int j=1;j<=i;j++){
//             cout<< j;
//         }
//         cout<<endl;
//     } 
// }

/*
55555
4444*
333**
22***
1****
pattern print
*/

// int main(){
//     int n;
//     cout<<"Enter the size  ";
//     cin>>n;
// for( int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//         cout<< n-i+1;
//     }
// for(int k=1;k<=i-1;k++){  
//         cout<< "*";
// }    
//     cout<<endl;
// }
// }

/*
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
pattern print
*/

// int main(){
//     int n;
//     cout<<"Enter the size  ";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int s=n;s>i;s--){
//             cout<<" ";
//         }
//         char ch ='A';
//         for(int j=1;j<2*i-1;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }


// reverse a number 

// int main(){
//     int n;
//     cout<<"Enter the number  ";
//     cin>>n;
//     int rev=0;
//     while(n>0){
//         int lastdigit = n%10;
//         rev = rev*10 + lastdigit;
//         n=n/10;
//     }
//     cout<<"Reverse number "<<rev<<endl;
// }

// reverse a number and find k th value

// int main(){
// int n;
// cout<<"enter the number  ";
// cin>>n;
// int k;
// cout<<"enter the position of the digit to find  ";
// cin>>k;
// int count =0;
// while(n>0){
// if(count==k){
//     cout<<n%10<<endl;
//     break;
// }
// count++;
// n=n/10;
// }
// }

// the user input have even number then sum the number and if odd then subtract the number

// int main(){
//     int sum=0;
//     int n;
//     cin>>n;
//     while(n>0){
//         int rem =n%10;
//         if(rem%2==0){
//             sum=sum+rem;  
//         }
//         n=n/10;
//         cout<<sum<<endl;     
//     }
// }

// Swaping of two number using pointer

// void swap(int *a, int *b){
//     int temp= *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=3, b=2;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }

// classes in c++ 

// class Student{
//      public:
//     string name;
//     int age;
//     int marks;
//     public:
//     void studata(){
//         cout<<name <<" got "<<marks<<" "<<"marks"<<" in the age of "<<age;
//     }
// };
//     int main(){
//         Student s1;
//         s1.name="hitesh";
//         s1.age=30;
//         s1.marks=90;
//         s1.studata();
//         return 0; 
//     }

// Constructor or Destructor

// class student{
//     public:
//     int age;
//     int marks;
//    student(int a,int b){
//     age=a;
//     marks=b;
//     cout<<"paramaterized constructor"<<age<<" "<<marks<<endl;
//    }
//    student(){
//     age=100;
//     cout<<"default constructor"<<age<<endl;
//    }
//    student(student &s){
//     age=s.age;
//     marks=s.marks;
//     cout<<"copy constructor"<<age<<" "<<marks<<endl;
//    }
// };
// int main(){
//     student s1;
//     s1.age=20;
//     s1.marks=80;
//     student s2(30,90);
//     student s3(s1);
// }

// Destructor  

// class Student{
// public:
// int age;
// Student()
// {
//     int age=100;
//     cout<<"constructor called "<<age<<endl;
// }
// Student(int a){
//     age=a;
//     cout<<"parameter "<<age<<endl;
// }
// Student(Student &s){
//     age=s.age;
//     cout<<"copy constructor called "<<age<<endl;
// }
// ~Student(){
//     cout<<"destructor called "<<age<<endl;
// }
// };
// int main(){
// Student s;
// s.age=20;
// Student s1(s);
// Student s2(50);
// }

// THIS KEYWORD IN C++

// class Home{
//     public:
//     string add;
//     string color;
//     Home(  string b, string c){
//          this->add=b;
//          this->color=c;
//          cout<<"address of home is "<<add<<" and color of home is "<<color<<endl;
//     }
// };
// int main(){
//     Home obj("jaipur","lightgrey"); 
// }

//  bank class using this keyword in c++

// class Bank{
//     public:
//     string name;
//     int balance;
//     Bank(string name,int balance){
//         this->name=name;
//         this->balance=balance;
//         cout<<"name of the bank is "<<name<<" and balance is "<<balance<<endl;
//     }
// };
// int main(){
//     Bank b("SBI",10000);
//     Bank b1("HDFC",20000);
// }

// Copy constructor in c++

// class college{
//     public:
//     string name;
//     int rank;
//     string location;
//     college(string a, int b,string c){
//         name =a ;
//         rank=b;
//         location=c;
//         cout<<"name of the college is "<<name<<" rank is "<<rank<<" and location is "<<location<<endl;
//     }
//     college(college &c){
//         name=c.name;
//         rank=c.rank;
//         location=c.location;
//         cout<<"name of the college is "<<name<<" rank is "<<rank<<" and location is "<<location<<endl;
//     }
// };
// int main(){
//     college c("JECRC",1,"jaipur");
//     college c1(c);
//     college c2("NIT",2,"DELHI");  
// }


// ADD digits leetcode question 258

// class Solution {
// public:
//     int addDigits(int num) {
//         if(num<10)
//         return num;
//         if(num%9==0)
//         return 9;
//         else
//         {
//             int rem = num%9;
//             return rem;
//         }
//     }
// };
// int main(){
//     Solution s;
//     int n;
//     cout<<"enter no.";
//     cin>>n;
//     cout<<s.addDigits(n);
// }

// destructor in c++

// class student{
//     int *age;
//     public:
//     student(int a){
//        int *age = new int;
//         *age=a;
//     }
//     ~student(){
//         delete age;
//     }
// };
// int main(){
//     student s(20);
// }

// Consecutive character leetcode question no. 1446 

// class Solution {
// public:
//     int maxPower(string s) {
//         int max= INT_MIN;
//         for(int i=0;i<s.size();i++){
//             int count=1;
//             for(int j=i+1;j<s.size();j++){
//                 if(s[i]==s[j]){
//                     count++;
//                 }
//                 else{
//                     break;
//                 }           
//             if(max<count){
//                 max=count;
//             }
//             }
//         }
//         return max;
//     }
// };
// int main(){
//     Solution s;
//     string str;
//     cout<<"enter the string  ";
//     cin>>str;
//     cout<<s.maxPower(str);
// }

// OOPS CONCEPT IN C++

// Encapsulation

// class student{
//     private:
//     string name;
//     int age;
//     public:
//     void setter(string n, int a){
//         name=n;
//         age=a;
//     }
//     void gettter(){
//         cout<<"name of the student is "<<name<<" and age is "<<age<<endl;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and age is "<<age<<endl;
//     }
// };
// int main(){
//     student s;
//     s.setter("hello",30);
//     s.gettter();
//     s.display();
//     return 0;
// }

// INHERITANCE IN C++ 
// SINGLE INHERITANCE

// class human{
//     protected:
//     string name;
// };
// class student : public human{
//     int roll_no;
//     public:
//     student(string n,int r){
//         name=n;
//         roll_no=r;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and roll no is "<<roll_no<<endl;
//     }
// };
// int main(){
//     student s("hitesh", 48);
//     s.display();
// }

// MULTILEVEL INHERITANCE

// class human{
//     protected:
//     string name;
// };
// class parents : public human{
//     protected:
//     int age;
// };
// class student : public parents{
//     protected:
//     int roll_no;
//     public:
//     student(string n,int a,int r){
//         name=n;
//         age=a;
//         roll_no=r;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and roll no is "<<roll_no<<" and age is "<<age<<endl;
//     }
// };
// int main(){
//     student s("kartik",49,92);
//     s.display();
// }

// MULTIPLE INHERITANCE

// class human{
//     protected:
//     string name;
// };
// class parents{
//     protected:
//     int age;
// };
// class student:public human ,public parents{
//     protected:
//     int rollno;
//     public:
//     student(string n, int a, int r){
//         name=n;
//         age=a;
//         rollno=r;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and age is "<<age<<" and roll no is "<<rollno<<endl;
//     }
// };
// int main(){
//     student s("sunil",12,48);
//     s.display();
// }

// HIERARCHICAL INHERITANCE

// class human{
//     protected:
//     string name;
// };
// class parents : public human{
//     protected:
//     int age;
//     public:
//     parents(string n, int a){
//         name=n;
//         age=a;
//     }
// void display(){
//     cout<<name<<" is a parent and age is"<<age<<endl;
// }
// };
// class student : public parents{
//     protected:
//     int roll_no;
//     public:
//     student(string n,int a,int r):parents(n,a){
//         name=n;
//         age=a;
//         roll_no=r;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and roll no is "<<roll_no<<" and age is "<<age<<endl;
//     }
// };
// int main(){
//     student s("raghav",21,26);
//     s.display();
//     parents p("john",21);
//     p.display();  
// }

// HYBRID INHERITANCE

// class human{
//     protected:
//     string name;
// };
// class parents:  public human{
//     protected:
//     int age;
// };
// class student :  public human , public parents{
//     protected:
//     int roll_no;
//     public:
//     student(string n,int a,int r){
//         name=n;
//         age=a;
//         roll_no=r;
//     }
//     void display(){
//         cout<<"name of the student is "<<name<<" and age is "<<age<<" and roll no is "<<roll_no<<endl;
//     }
// };
// int main(){
//     student s("abishek",45,82);
//     s.display();
// }

// operator overloading in c++ 
//  the code is add two class in third class using operator overloading

// class A{
//    public:
//     int b;
//     int a;
//     A(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
//     A operator + (A &obj){
//         A res(0,0);
//         res.a=this->a + obj.a;
//         res.b=this->b + obj.b;
//         return res;
//     }
// };
// int main(){
//     A a(5,10);
//     A b(15,20);
//     A c = a + b;
//     cout<<"value of c.a is "<<c.a<<" and value of c.b is "<<c.b<<endl;
//     return 0;
// }

// CONSTRUCT A RECTANGLE LEETCODE QUESTION 492

// class Solution {
// public:
//     vector<int> constructRectangle(int area) {
//         vector<int>v;
//         int width=0;
//         int x = sqrt(area);
//         for(int i=1;i<=x;i++){
//         if(area % i==0){
//            width =i;
//         }
//         }
//         int length = area/width;     
//         v.push_back(length);
//         v.push_back(width);
//         return v;
//     }
// };
// int main(){
//     Solution s;
//     int area;
//     cout<<"enter the area  ";
//     cin>>area;
//     vector<int> res = s.constructRectangle(area);
//     cout<<"length is "<<res[0]<<" and width is "<<res[1]<<endl;
// }

// 

