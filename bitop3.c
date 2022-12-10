#include <stdio.h>

unsigned int flip_all_bits(unsigned int n) {
    // initialize the bitmask with all bits set
    unsigned int bitmask = ~0;

    // flip all the bits in the number using the bitwise XOR operator (^)
    n ^= bitmask;

    // return the modified number
    return n;
}

int main() {
    // test the flip_all_bits function
    unsigned int n = 10;
    unsigned int result = flip_all_bits(n);
    printf("The number %u with all bits flipped is %u\n", n, result);

    return 0;
}
