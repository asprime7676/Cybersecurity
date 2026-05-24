// Question: Enter 5 subject markes from user and find out the highest score in given marks
#include <stdio.h>
int main()
{
    int Hindi, English, Maths, Physics, Chemistry;
    printf("Enter your Hindi subject marks: ");
    scanf("%d", &Hindi);
    printf("Enter your English subject marks: ");
    scanf("%d", &English);
    printf("Enter your Maths subject marks: ");
    scanf("%d", &Maths);
    printf("Enter your Physics subject marks: ");
    scanf("%d", &Physics);
    printf("Enter your Chemistry subject marks: ");
    scanf("%d", &Chemistry);
    if (Hindi > English || Hindi > Maths || Hindi ><  Physics || Hindi >< Chemistry)
        printf("The higest marks is %d" );
    else
        printf("The Lowest marks is %d");

    
    return 0;
}