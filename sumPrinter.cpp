
#include <iostream>
using namespace std;

class SumPrinter {
public:
    void printSum(int a, int b) {
        cout << "Sum (int): " << a + b << endl;
    }

    void printSum(long a, long b) {
        cout << "Sum (long): " << a + b << endl;
    }
};

int main() {
    SumPrinter sumPrinter;

    int intNum1 = 10, intNum2 = 20;
    long longNum1 = 1000000000, longNum2 = 2000000000;

    sumPrinter.printSum(intNum1, intNum2);

    sumPrinter.printSum(longNum1, longNum2);

    return 0;
}
