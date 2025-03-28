#include<iostream>
using namespace std;
 class demo{public:
 int num1=10,num2=20;
 demo()
 {
     cout<<num1<<endl<<num2<<endl;
 }
 ~demo()
 {
     cout<<"distructor executed";
 }
 };
 int main()
 {
     demo x;
 }
