#include <stdio.h>

int main() {
    printf("Here %d, is an integer\n", 50);
    printf("Here %f, is an decimal\n", 49.342344f);
    printf("Here %.2f, is an decimal, rounded to nearest hundred\n", 1049.345344);
    printf("Here %s, is an string\n", "hello world");
    printf("Here %X, is an integer in hexadecimal\n", 0x3ab3);
    printf("We can also print them all at the same time like this, %s, %f, %X, %d\n", "a string", 34.12f, 0xface, 34);

    return 0;
}