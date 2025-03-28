#include<iostream>
using namespace std;
class student{public:
string name;


student()
{
    getline(cin,name);
    cout<<"NAME OF THE STUDENT IS:"<<name;
}
~student()
{
    cout<<"\n used destructor.";
}};
int main()
{
    student x;
    return 0;
}
