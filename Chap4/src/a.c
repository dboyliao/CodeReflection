#include <stdio.h>

// __attribute__((weak)) int shared = 2;
extern int shared;

int main(void) {

    int a = 100;

    printf("[Before swap]: a = %d, shared = %d\n", a, shared);
    swap(&a, &shared);
    printf("[After swap]: a = %d, shared = %d\n", a, shared);
}