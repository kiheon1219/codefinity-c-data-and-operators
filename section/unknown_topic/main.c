#include <stdio.h>

int main() {
    int x = -6;

    bool point = (x > -32 && x < 0); 

    printf("Is the expression logically correct?\n");
    printf("%d\n", point);

    return 0;
}