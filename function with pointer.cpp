#include<iostream>
using namespace std;

class test{

public:

    void add()
    {
        cout<<"fuck you";
    }


};
int main()
{

    test ob;
   test *p=&ob;
    p->add();


}
