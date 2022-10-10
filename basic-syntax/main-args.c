#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2)
        return -1;
    
    printf("Argument %s was provided with command.\n", argv[1]);

    return 0;
}