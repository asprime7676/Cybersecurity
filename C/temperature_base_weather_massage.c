/*Question: Write a C program to read temperature in centigrade and display a suitable message according to the temperature
 state below:
 Temp < 0 then Freezing weather
 Temp 0-10 then Very Cold weather
 Temp 10-20 then Cold weather
 Temp 20-30 then Normal in Temp
 Temp 30-40 then Its Hot
 Temp >=40 then Its Very Hot
 Test Data : 42  */
#include <stdio.h>
int main()
{
    int w;
    printf("Enter the Temperatur: ");
    scanf("%d", &w);
    if (w < 0)
        printf("Freezing Weather");
    else if (w >= 0 && w <= 10)
        printf("Very Cold Weather");
    else if (w >= 11 && w <= 20)
        printf("Cold Weather");
    else if (w >= 21 && w <= 30)
        printf("Normal In Temperature");
    else if (w >= 31 && w <= 40)
        printf("Its Hot");
    else if (w >= 41)
        printf("Its Very Hot");
    else
        printf("Thanking you");
    return 0;
}
