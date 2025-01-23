#include <iostream>
using namespace std;

class Student
{
public:
    string student_name;
    int student_grades[5];

    void calculateGrade()
    {
        int totalGrade = 0;
        for (int i = 0; i < 5; ++i)
        {
            totalGrade += student_grades[i];
        }
        cout << "Total grade of " << student_name << " is: " << totalGrade << endl;
    }

    void calculateAverage()
    {
        int totalGrade = 0;
        for (int i = 0; i < 5; ++i)
        {
            totalGrade += student_grades[i];
        }
        double averageGrade = static_cast<double>(totalGrade) / 5;
        cout << "Average grade of " << student_name << " is: " << averageGrade << endl;
    }
};

int main()
{
    Student student;
    cout << "Enter student name: ";
    cin >> student.student_name;
    cout << "Enter 5 grades: ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> student.student_grades[i];
    }
    student.calculateAverage();
    return 0;
}
