#include<iostream>
using namespace std;
class complexx
{

public:
    double num1,num2;
    complexx(float x,float y)
    {
        num1=x;
        num2=y;
    }
    complexx()
    {
        num1=0.00;
        num2=0.00;

    }
    void show()
    {
        cout<<num1<<"+"<<num2<<"i"<<endl;
    }
};
complexx operator+(complexx m,complexx n)
{
    complexx objj;
    objj.num1=m.num1+n.num1;
    objj.num2=m.num2+n.num2;
    return objj;
}


int main()
{

    complexx ob(10,20),ob1(12,15);
    complexx obj = ob+ob1;
    obj.show();
    return 0;



}
