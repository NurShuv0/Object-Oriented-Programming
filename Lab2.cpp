#include <iostream>
#include <string.h>
using namespace std;
class String {
private:
    char* str;
public:
    String() {
        str = new char[1];
        str[0] = '\0';
    }
    String(char* s) {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    void upit() {
        for (int i = 0; str[i]; i++) {
            str[i] = toupper(str[i]);
        }
    }

    void display() {
        cout << str << endl;
    }
   void getData() {
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, sizeof(s));
    int length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}
};
int main() {
    String s1 = "Hello World";
    s1.upit();
    cout << "After uppercasing: ";
    s1.display();

    String s2;
    s2.getData();
    s2.upit();
    cout << "After uppercasing: ";
    s2.display();

    return 0;
}
