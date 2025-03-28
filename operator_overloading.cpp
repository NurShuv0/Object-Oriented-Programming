#include<iostream>
using namespace std;
class rectrangle{
private:
    int lenght,width;

public:
    void get_data()
    {   cout<<"enter the value of lenght and width:\n";
        cin>>lenght>>width;
    }
   void show()
    {
        cout<<"increamented lenght is:"<<lenght<<endl<<"increamented width is:"<<width;
    }

    int operator++ (int)
    {
        rectrangle ob;
        ob.lenght=this->lenght++;
        ob.width=this->width++;
        return 0;
    }



};
int main()
{
    rectrangle r1;
    r1.get_data();
    r1++;
    r1.show();

}
