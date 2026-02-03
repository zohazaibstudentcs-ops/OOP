#include <iostream>
using namespace std;
class Result
{
private:
    float marks[5];
    float gradePoints[5];
    int credithours[5];
    float totalCreditHours = 0;
    float total = 0;
    float GPA;
    float calculateGradePoint(float m)
    {
        if (m >= 85 && m <= 100) return 4.00;
        else if (m >= 80) return 3.70;
        else if (m >= 75) return 3.30;
        else if (m >= 70) return 3.00;
        else if (m >= 65) return 2.70;
        else if (m >= 61) return 2.30;
        else if (m >= 58) return 2.00;
        else if (m >= 55) return 1.70;
        else if (m >= 50) return 1.00;
        else return 0.00;
    }
public:
    void get()
    {
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            gradePoints[i] = calculateGradePoint(marks[i]);
        }
        cout << "Enter credit hours of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> credithours[i];
            totalCreditHours += credithours[i];
        }
    }
    void calculations()
    {
        for (int i = 0; i < 5; i++)
            total += gradePoints[i] * credithours[i];
        GPA = total / totalCreditHours;
        cout << "\nMarks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << "\nYour GPA is: " << GPA << endl;
    }
};
int main()
{
    Result Student;
    Student.get();
    Student.calculations();
    return 0;
}
