#include<iostream>
using namespace std;
class rectangle
{
private:
    int l=12,w=5;
public:
    friend void calculateArea (rectangle ob);
    friend void calculateperimeter (rectangle ob);

};
void calculateArea (rectangle ob)
{
    int area=ob.l*ob.w;
    cout<<"AREA OF RECTANGLE IS:"<<area<<endl;
}
void calculateperimeter (rectangle ob)
{
    int peri=2*(ob.l+ob.w);
    cout<<"PERIMETER IS:"<<peri;
}
int main()
{
    rectangle ob;
    calculateArea (ob);
    calculateperimeter(ob);
}
