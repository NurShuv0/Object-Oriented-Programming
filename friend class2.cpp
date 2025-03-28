#include<iostream>
using namespace std;
class car
{
private:
    int speed=100;
public:
    friend class driver;
};
class driver
{
public:
    void add(car x)
    {
        cout<<"speed is: "<<x.speed<<" meter/s";
    }
};
int main()
{
    car ob;
    driver obj ;
    obj.add(ob);
}

