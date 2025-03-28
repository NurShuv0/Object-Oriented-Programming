#include<iostream>
using namespace std;
class example
{
public:

    int a,b;

    void add(example x)
    {
        int sum=a;
        cout<<a<<endl;
        sum=sum+x.a;
        cout<<sum<<endl;
        sum=b+x.b;
        cout<<endl<<sum;
    }

};

int main()
{
    example ob1,ob2;
    ob1.b=100;
    ob2.b=150;
    ob2.a=20;
    ob1.a=10;
    ob1.add(ob2);
}

