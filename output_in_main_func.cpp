#include<iostream>
using namespace std;
class exercise
{
public:
    int age,id;
    string name;
};

int main()
{
    exercise ob,obj;
    cout<<"Name is:";
    getline(cin,obj.name);
    cout<<"Age and id are respectively:";
    cin>>ob.age>>ob.id;
    cout<<obj.name<<endl<<ob.age<<endl<<ob.id;
}
