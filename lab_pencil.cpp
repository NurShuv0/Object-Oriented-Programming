#include<iostream>
using namespace std;
class pencil{
private:
    int count;
public:
    pencil(int k)
    {
        count=k;
    }
friend operator>(pencil ob1,pencil ob2);

};
 operator>(pencil ob1,pencil ob2){
if(ob1.count>ob2.count)
{
    return true;
}
else return false;

}
int main()
{
    pencil obj1(20),obj2(50),obj3(40);
    if(obj1>obj2 && obj1> obj3)
    {
        cout<<"OBJECT 1 HAS HIGHEST COUNT"<<endl;
    }
    else if(obj2>obj1 && obj2>obj3)
    {
        cout<<"OBJECT 2 HAS HIGHEST COUNT"<<endl;
    }
    else
    {
        cout<<"OBJECT 3 HAS HIGHEST COUNT"<<endl;
    }
    return 0;
}
