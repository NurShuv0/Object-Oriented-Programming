#include<iostream>
using namespace std;
class employee
{
private:
    int salary=10000;
public:
    friend class hr_department;
};
class hr_department
{
public:
    void add(employee x)
    {
        cout<< x.salary;
    }


};
int main()
{
    employee ob;
    hr_department obj;
    obj.add(ob);
}

