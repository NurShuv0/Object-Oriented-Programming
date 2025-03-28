#include<iostream>
using namespace std;
class books{
int num_of_books;
public:
    books(int x){
    num_of_books=x;
    }

   void show()
   {
       cout<<num_of_books<<endl;

   }
 friend books operator++(books&obj,int);
};
books operator ++ (books &obj,int){
obj.num_of_books++;
return obj;

}



int main()
{
    books ob(50);
    ob++;
    ob.show();
    return 0;
}
