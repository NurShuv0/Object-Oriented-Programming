#include<iostream>
using namespace std;
    class calculator{public:
    int num1=10,num2=20;

    calculator()
    {
        int sum=num1+num2;
        int sub;
        if(num1>num2)
        {
            cout<<"SUB IS"<<num1-num2<<endl;
        }else
        {
        cout<<"SUB IS:"<<num2-num1<<endl;}

        int product=num1*num2;
        cout<<"THE SUM IS:"<<sum<<endl<<"THE PRODUCT IS:"<<product<<endl;
    }
    };

    int main()
    {
        calculator ob;
    }

