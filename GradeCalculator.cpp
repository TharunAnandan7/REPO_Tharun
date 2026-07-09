#include <iostream>
#include <iomanip>


int main()
{
    int n;
    float credit, GradePoint;
    float totalCredits = 0;
    float totalGradePoints = 0;
    std :: cout << std :: setprecision(0);
    std :: cout << "==============================\n";
    std :: cout << "       CGPA CALCULATOR\n";
    std :: cout << "==============================\n";

    std :: cout << "Enter the number of subjects: ";
    std :: cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std :: cout << "\nSubject " << i << std :: endl;

        std :: cout << "Enter Credit: ";
        std :: cin >> credit;

        std :: cout << "Enter Grade Point (0-10): ";
        std :: cin >> GradePoint;

        totalCredits += credit;
        totalGradePoints += credit * GradePoint;
    }

    float cgpa = totalGradePoints / totalCredits;

    std :: cout << "\n==============================\n";
    std :: cout << std :: fixed << std :: setprecision(2);

    std :: cout << "Total Credits      : " << totalCredits << std :: endl;
    std :: cout << "CGPA               : " << cgpa << std :: endl;

    std :: cout << "==============================\n";

    return 0;
}
