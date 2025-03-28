#include<iostream>
using namespace std;
class car{public:
  string model,brand;
  int year;
  double mileage;

  car()
  {   cout<<"THE MODEL,BRAND,YEAR AND MILEAGE ARE RESPECTIVELY:\n";
      getline(cin,model);
      getline(cin,brand);
      cin>>year>>mileage;
      cout <<model<<endl<<brand<<endl<<year<<endl<<mileage;
  }
  ~car()
  {
      cout<<"\n destructor executed";
  }

};


int main()
{
   car x;
}


