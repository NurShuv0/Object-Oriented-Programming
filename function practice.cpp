#include<iostream>
using namespace std;

class example
{
public:

    int num1,num2;
    void add(example x)
    {
        cout<<x.num1<<endl<<num1<<endl<<num2;
    }
};
int main()
{
    example ob,obj;
    ob.num1=100;
    ob.num2=150;
    obj.num1=200;
    obj.num2=400;
    obj.add(ob);


}
