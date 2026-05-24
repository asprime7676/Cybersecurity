/*Question: write a program to check monthe name in hindi and also show
range of that particular month and input takes from user */
#include <stdio.h>
int main()
{
    int d, m;
    printf("Enter the date (dd): ");
    scanf("%d", &d);
    printf("Enter month (mm): ", m);
    scanf("%d", &m);
    if (m == 3 && d >= 15 || m == 4 && d <= 13)
    {
        printf("this is Chaitra month\n");
        printf("The range of Chaitra month is 15 March to 13 April");
    }
    else if (m == 4 && d >= 14 || m == 5 && d <= 14)
    {
        printf("This is Vaishak month\n");
        printf("The range of Vaishak month is 14 April to 14 May");
    }
    else if (m == 5 && d >= 15 || m == 6 && d <= 14)
    {
        printf("This is Jyestha month\n");
        printf("The range of Jyestha month is 15 May to 14 June");
    }
    else if (m == 6 && d >= 15 && m == 7 && d <= 15)
    {
        printf("This is Ashadha month\n");
        printf("The range of Ashadha month is 15 June to 15 July");
    }
    else if (m == 7 && d >= 16 || m == 8 && d <= 15)
    {
        printf("This is Shravana month\n");
        printf("The range of Sheavana month is 16 July to 15 August");
    }
    else if (m == 8 && d >= 16 || m == 9 && d <= 15)
    {
        printf("This is Bhadrapada month\n");
        printf("The range of Bhadrapada month is 16 August to 15 September");
    }
    else if (m == 9 && d >= 16 || m == 10 && d <= 15)
    {
        printf("This is Ashwin month\n");
        printf("The range of Ashwin month is 16 September to 15 October");
    }
    else if (m == 10 && d >= 16 || m == 11 && d <= 14)
    {
        printf("This is Kartik month\n");
        printf("The range of this month is 10 October to 14 November");
    }
    else if (m == 11 && d >= 15 || m == 12 && d <= 14)
    {
        printf("This is Margashirsha month\n");
        printf("The range of this month is 15 November to 15 December");
    }
    else if (m == 12 && d >= 15 || m == 1 && d <= 13)
    {
        printf("This is paush month\n");
        printf("The range of this month is 15 December to 13 January");
    }
    else if (m == 1 && d >= 14 || m == 2 && d <= 12)
    {
        printf("This is Magha month\n");
        printf("The range of this month is 14 January to 12 February");
    }
    else if (m == 2 && d >= 13 || m == 3 && d <= 14)
    {
        printf("This is Phalguna month\n");
        printf("The range of this month is 13 February to 14 March");
    }
    else
        printf("You Entered wrong Information please correct it and fill it again");

    return 0;
}
