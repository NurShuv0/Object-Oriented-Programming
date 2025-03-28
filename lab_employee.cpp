#include<iostream>
using namespace std;
class employee{
private:
    int id,salary;
public:
    employee(int x,int y)
    {
        id=x;
        salary =y;
    }
    friend bool operator ==(employee obj1,employee obj2);

};
    bool operator ==(employee obj1,employee obj2){

        if(obj1.salary==obj2.salary)
            return true;

    else
        return false;}



int main()
{
    employee ob1(639,10000),ob2(622,15000);
    bool x=ob1==ob2;
    if(x)
    {
        cout<<"They earn same amount";
    }
    else{
    cout<<"They do not earn same amount";
    }
}

