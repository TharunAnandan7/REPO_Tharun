#include <iostream>
#include <iomanip>
#include <string>
/*
 -> implement input for asking subject name and outout the credit for each induvidual subject
 -> output each subject with it's respective credits earned
*/

int main()
{
    int n;
    std :: string subjectName[n];
    float credit, GradePoint;
    float totalCredits = 0;
    float totalGradePoints = 0;

    std :: cout << std :: setprecision(0); 
    std :: cout << "**********************************************************************************\n";
    std :: cout << "       \t\t\t\tCGPA CALCULATOR\n";
    std :: cout << "**********************************************************************************\n";


    std :: cout << "Enter the number of subjects: ";
    std :: cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std :: cout << "Enter the name of the subject - "<< i ;
        std :: cin >> subjectName[i]; 
        std :: cout << "\nSubject " << i << std :: endl;

        std :: cout << "Enter Credit: ";
        std :: cin >> credit;

        std :: cout << "Enter Grade Point (0-10): ";
        std :: cin >> GradePoint;

        totalCredits += credit;
        totalGradePoints += credit * GradePoint;
    }std :: cout << std :: endl << std :: endl;

    float cgpa = totalGradePoints / totalCredits;

    std :: cout << std :: fixed << std :: setprecision(2);

    std :: cout << "\n================================================================================\n";

    std :: cout << "\t\t\tTotal Credits      : ";

    
    std :: cout << totalCredits << std :: endl;

    
    std :: cout << "\t\t\tCGPA               : ";

    
    std :: cout << cgpa << std :: endl;

    std :: cout << "\n================================================================================\n";

    return 0;
}

/*
required output:
                                        CGPA CALCULATOR:

Enter the number of subjects: 3

Enter the name of the subject- 1: Subject1
Subject- 1: Subject1
Enter credit : CerditNum
Enter grade point (0 - 10): GradePoint


Subject - 1: subject1
credit : CreditNum
Grade Point: GradePoint
        .
        .
        .
        for upto n number of subjects...

======================================================
                Total Credits: Credit_total
                CGPA : Total_GPA
======================================================
*/




