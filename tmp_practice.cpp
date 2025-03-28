#include <iostream>
#include <string>
using namespace std;

template<typename T>
T Add(T a, T b, T c) {
    return a + b + c;
}

int main() {

    int Int = Add(2, 3, 4);
    cout << "Sum of integers: " << Int << endl;

    float Float = Add(2.5, 3.2, 4.8);
  cout << "Sum of floating-point numbers: " << Float << endl;

    string String = Add(string("LAB"), string(" "),string("FINAL"));
   cout << "sum of string: " << String << endl;

    return 0;
}
