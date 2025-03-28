#include<iostream>
using namespace std;
class person{
public:
    int age=22;
    string name="abdullah";
    void show()
    {

    }
};
class employee:public person{
public:
    int employee_id=22332;

};
class manager:public employee{
public:
    string department="managing";
    void show()
    {
        cout<<name<<endl<<age<<endl<<employee_id<<endl<<department;
    }

};

int main()
{

   manager obj;
   obj.show();

}
