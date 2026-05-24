/*Question: Write a C program to read the roll no, name and marks of three subjects and calculate the total,
percentage and division. Test Data : Input the Roll Number of the student :784 Input the Name of the Student
:James Input the marks of Physics, Chemistry and Computer Application : 70 80 90 Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First  */
#include <stdio.h>
int main()
{
    int r, p, a, c, t;
    char s[50];
    float pe;
    printf("Enter Your Roll No: ");
    scanf("%d", &r);

    printf("Enter Your Name: ");
    scanf(" %[^\n]", s);

    printf("Enter Physics marks: ");
    scanf("%d", &p);

    printf("Enter Chemistry marks: ");
    scanf("%d", &c);

    printf("Enter Computer Application marks: ");
    scanf("%d", &a);

    printf("Roll No: %d\n", r);
    printf("Name of Student: %s\n", s);
    printf("Marks in Physics: %d\n", p);
    printf("Marks in Chemistry: %d\n", c);
    printf("Marks in Computer Application: %d\n", a);
    t = p + c + a;
    printf("Total marks = %d\n", t);
    pe = (t / 300.0) * 100;
    printf("Percentage = %.2f\n", pe);
    if (pe >= 60)
        printf("Division = First\n");
    else if (pe < 60 && pe >= 40)
        printf("Division = Second");
    else if (pe < 40 && pe >= 33)
        printf("Division = Third");
    else
        printf("Division = Fourth But FAIL\n");
    return 0;
}