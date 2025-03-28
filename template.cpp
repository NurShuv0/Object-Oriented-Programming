
#include<iostream>
using namespace std;


template<typename sakib>
sakib add(sakib x,sakib y,sakib z){


return x+y+z;
}


int main(){

	cout<<add<int>(5,6,7)<<endl;
	cout<<add<float>(5.5,3.3,4.6)<<endl;
	cout<<add<string>("S","A","K")<<endl;



}
