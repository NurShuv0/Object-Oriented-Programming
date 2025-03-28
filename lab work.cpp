#include <iostream>
using namespace std;
class myClass {
public:
    int u;
    int v;
    myClass(int u, int v) : u(u), v(v) {}
    myClass& operator--() {
        int sum;
        u -= sum;
        v -= sum;
        return *this;
    }
};
int main() {
    myClass obj(10, 20);
    cout << "Initial values: u=" << obj.u << ", v=" << obj.v <<endl;
    --obj;
    cout << "After --obj: u=" << obj.u << ", v=" << obj.v <<endl;
    return 0;
}
