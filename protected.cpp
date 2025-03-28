#include<iostream>
using namespace std;

class Student
{
protected:
    string name;
    int id;

private:
    void getData()
    {
        cout << "Enter student information:" << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }

    friend class Course;
};

class Course : public Student
{
private:
    int courseId;

public:
    void getData()
    {
        Student::getData();

        cout << "Enter course information:" << endl;
        cout << "Enter course id: ";
        cin >> courseId;
    }

    void showData()
    {
        Student::showData();

        cout << "Course id: " << courseId << endl;
    }
};

int main()
{
    Course c1;
    c1.getData();
    c1.showData();

    return 0;
}

