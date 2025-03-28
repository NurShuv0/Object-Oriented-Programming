#include <iostream>
using namespace std;

class FullTimeJob;

class PartTimeJob {
protected:
    double salaryPerDay;
    int days;

public:
    void setSalaryPerDay(double salary) {
        salaryPerDay = salary;
    }

    void setDays(int numDays) {
        days = numDays;
    }

    friend class TotalSalary;
};

class FullTimeJob {
protected:
    double fullTimeSalary;

public:
    void setFullTimeSalary(double salary) {
        fullTimeSalary = salary;
    }

    friend class TotalSalary;
};

class TotalSalary {
private:
    double total;

public:
    void calculateTotal(PartTimeJob partTimeObj, FullTimeJob fullTimeObj) {
        total = (partTimeObj.salaryPerDay * partTimeObj.days) + fullTimeObj.fullTimeSalary;
    }

    friend void printTax(TotalSalary totalSalaryObj);
};

void printTax(TotalSalary totalSalaryObj) {
    if (totalSalaryObj.total >= 50000) {
        double tax = 0.10 * totalSalaryObj.total;
        cout << "Tax is: " << tax << endl;
    } else {
        cout << "No tax. Salary is " << totalSalaryObj.total <<endl;
    }
}

int main() {
    PartTimeJob partTime;
    partTime.setSalaryPerDay(500);
    partTime.setDays(20);

    FullTimeJob fullTime;
    fullTime.setFullTimeSalary(20000);

    TotalSalary totalSalary;
    totalSalary.calculateTotal(partTime, fullTime);

    printTax(totalSalary);

    return 0;
}
