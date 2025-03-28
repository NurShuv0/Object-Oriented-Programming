#include<iostream>
using namespace std;
class test{
public:
    void add()const {    
    cout<<"hello world";

    }

};



int main()
{
    const test ob;
     ob.add();


}
