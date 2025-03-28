#include<iostream>
using namespace std;
class test{

public:
    int salary;
    test(int x)
    {
        salary=x;
    }
    void output()
    {
        cout<<salary;
    }

};
int main()
{
    test ob(10000);
    ob.output();
    return 0;


}
