#include<iostream>
using namespace std;
class person{
public:
string name;
int age;

};
int main()
{
    person ob;
    getline(cin,ob.name);
    cin>>ob.age;
    cout<<ob.name<<"  "<<endl<<ob.age;


    return 0;
}
