#include<iostream>
using namespace std;
class rectangle
{
private:

    int lenght,width;
public:
    rectangle ()
    {
        lenght=10;
        width=5;
    }
    friend void calculateArea(rectangle ob);


};
void calculateArea(rectangle x )
{
    int area=x.lenght*x.width;
    cout<<"THE AREA IS:"<<area;
}


int main()
{
    rectangle ob;
    calculateArea(ob);
}
