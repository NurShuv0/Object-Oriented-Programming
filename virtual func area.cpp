#include<iostream>
using namespace std;
class shape
{
public:
    int width,height;
    virtual void area()
    {

    }
    void setheight(int i,int j)
    {
        height=i;
        width=j;
    }

};
class rec:public shape
{
public:
    void area()
    {
        cout<<"\n area of rectrangle ="<<height*width;
    }

};
class triangle:public rec
{
public:
    void area()
    {
        cout<<"\n area of triangle ="<<.5*height*width;
    }

};
int main()
{
    triangle *p=new triangle();
    p->setheight(10,20);
    p->triangle::area();
    p->rec::area();
}
