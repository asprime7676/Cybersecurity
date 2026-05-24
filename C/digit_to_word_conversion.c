/*Question: Write a program in C to read any digit and display it in the word. 
 Test Data : 4 
 Expected Output : Four    */
 #include<stdio.h>
 int main()
{
    int Number;
    printf("Enter a Number (1-10): ");
    scanf("%d", &Number);
    switch (Number)
    {
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    case 3:
        printf("THREE");
        break;
    case 4:
        printf("FOUR");
        break;
    case 5:
        printf("FIVE");
        break;
    case 6:
        printf("SIX");
        break;
    case 7:
        printf("SEVEN");
        break;
    case 8:
        printf("EIGHT");
        break;
    case 9:
        printf("NINE");
        break;
    case 10:
        printf("TEN");
        break;
    }
    if (Number > 10)
        printf("You Entered Wrong Number Please Enter Number Between 1 and 10");
    return 0;
}