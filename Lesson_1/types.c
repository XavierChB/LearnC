#include <stdio.h>

int main(int argc, char *argv[])
{
    char A = 'A';
    char z = 'z';
    for (char i = A; i <= z; i++) { printf("%c: %d\n", i, i); }
}
