#include <iostream>
#define nl "\n"
using namespace std;
class Date {
public:
    int day, month, year;
    Date() {
        day = month = year = 0;
    }
    Date(int a, int b, int c) {
        day = a;
        month = b;
        year = c;
    }
};
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void validate(Date obj) {
    if (obj.month < 1 || obj.month > 12) {
        cout << "The date is invalid" << nl;
        return;
    }
    bool valid = false;
    if ((obj.month == 1 || obj.month == 3 || obj.month == 5 || obj.month == 7 ||
        obj.month == 8 || obj.month == 10 || obj.month == 12) && (obj.day >= 1 && obj.day <= 31)) {
        valid = true;
    }
    else if ((obj.month == 4 || obj.month == 6 || obj.month == 9 || obj.month == 11) && (obj.day >= 1 && obj.day <= 30)) {
        valid = true;
    }
    else if (obj.month == 2) {
        if (isLeapYear(obj.year) && obj.day >= 1 && obj.day <= 29) {
            valid = true;
        }
        else if (!isLeapYear(obj.year) && obj.day >= 1 && obj.day <= 28) {
            valid = true;
        }
    }
    if (valid)
        cout << "The date is valid" << nl;
    else
        cout << "The date is invalid" << nl;
}
int main() {
    int d, m, y;
    cout << "Enter day, month, and year: ";
    cin >> d >> m >> y;
    Date obj(d, m, y);
    validate(obj);
}

