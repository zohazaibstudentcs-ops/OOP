#include <iostream>
using namespace std;
class Result
{
private:
    float marks[5];
    int credithours[5];
    float totalcredithours = 0, total = 0;
    float GPA;
public:
    void get()
    {
        cout << "Enter marks (grade points) of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " Enter: ";
            cin >> marks[i];
        }
        cout << "Enter credit hours of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " Enter: ";
            cin >> credithours[i];
            totalcredithours += credithours[i];
        }
    }
    void calculations()
    {
        for (int i = 0; i < 5; i++)
            total += credithours[i] * marks[i];

        GPA = total / totalcredithours;
        cout << "\nGrade points entered: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";

        cout << "\nYour GPA is: " << GPA;
    }
};
int main()
{
    Result Student;
    Student.get();
    Student.calculations();
    return 0;
}
