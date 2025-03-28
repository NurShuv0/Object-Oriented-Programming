#include<iostream>
using namespace std;
class vehicle
{
public:
    string model;
    int year;

};
class car:public vehicle
{
public:
    string color;
    int weight;
    void show()
    {
        cout<<"for bike:\n "<<"model:"<<model<<"\nYear:"<<year<<"\ncolor:"<<color<<"\nweight:"<<weight<<endl;
    }
};
class motorcycle:public car
{
public:
    string color;
    int weight;
    void show()
    {
        cout<<"For motorcycle:\n"<<"model:"<<model<<"\nYear:"<<year<<"\ncolor:"<<color<<"\nweight:"<<weight<<endl;
    }
};
int main()
{
    car ob;
    ob.model="Marcedes";
    ob.year=2022;
    ob.color="Black";
    ob.weight=500;
    motorcycle obj;
    obj.model="R15";
    obj.year=2022;
    obj.color="Black";
    obj.weight=150;
    ob.show();
    obj.show();
    return 0;
}
