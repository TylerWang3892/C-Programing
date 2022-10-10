#include <stdio.h>

int main() {
    int inputNumber;
    char inputString[20]; //c's version of a string, we will touch on what this means later
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    printf("Enter a string: ");
    scanf("%19s", inputString); //this caps the number of charactors to 20

    printf("The user entered %d, and %s", inputNumber, inputString);

    return 0;
}