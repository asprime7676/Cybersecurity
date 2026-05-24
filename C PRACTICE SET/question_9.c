#include <stdio.h>

int main() {
    int Hindi, English, Maths, Physics, Chemistry;
    int highest;

    printf("Enter 5 subject marks:\n");
    scanf("%d %d %d %d %d", Hindi, English, Maths, Physics, Chemistry);

    // Assume first is highest
    highest = Hindi;

    if(English > highest)
        highest = English;

    if(Maths > highest)
        highest = Maths;

    if(Physics > highest)
        highest = Physics;

    if(Chemistry > highest)
        highest = Chemistry;

    printf("Highest score is: %d\n", highest);

    return 0;
}
