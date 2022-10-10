#include <stdio.h>

void print(const char* string); //this simple line should stop all the problems

int main() {
    print("Hello from another world");

    return 0;
}

void print(const char* string) { //NOTE const char* is C's fancy way of saying String. We will touch on what this means later
    printf(string);
}