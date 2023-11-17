#include <stdio.h>
/**
 * main - entry point
 * return: 0 if succesful
 */
int main() {
    // Use inline assembly to call printf
    asm volatile (
        "mov $hello, %%rdi\n"
        "call printf\n"
        :
        : "r" ("Hello, Holberton\n")
        : "rdi"
    );

    return 0;
}
