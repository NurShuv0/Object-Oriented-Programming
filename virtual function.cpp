#include<iostream>
using namespace std;

class flower{
public:
    virtual void showitem()=0;

};
class rose :public flower
 {
public:
    virtual void showitem()
    {
        cout<<"sells rose\n";
    }

};
class marigold: public rose{
public:
    virtual void showitem()
    {
        cout<<"sells marigold \n";    }
};
int main()
{
    marigold *p=new marigold();
    p->showitem();
    p->showitem();
    return 0;
}
