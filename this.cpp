#include<bits/stdc++.h>
using namespace std;

class A{

public:
    int n;
    A(int x): n(x){}

    A(): n(0){}


    A operator+(const A & obj){

    A o;
    o.n=this->n+obj.n;
    return o;
    }


     A operator*(int scaler){

    A o;
    o.n=this->n*scaler;
    return o;
    }

    void show(){

    cout<<"N:"<<n<<endl;

    }


};


int main(){

A ob1,ob2(5),ob3(10),ob4;
ob1=(ob2*10)+ob3;

ob1.show();
}
