#include<iostream>
using namespace std;
class W
{
public:
  virtual void display ()
   {
       cout<<"INHARITED"<<endl;
   }
};
class X: public virtual W
{

};
class Y: public virtual W
{

};
class Z: public X, public Y
{


};
int main(){

Z *p=new Z();
 p->W::display();
}
