#include <stdio.h>

/*
1010
^
0101
    1111
0001
    1011
0010
    1000 
1000

*/

int num_bits (int a, int b) {
    int tot_bit = 0, bit_pos = 0, i = 0;
    bit_pos = b ^ a;

    for (i = 0; i < 32; i++) {
        if ((1 << i) & bit_pos) tot_bit++;
    }
    return tot_bit;
}

int main () {

    printf ("0xa to 0x2 is %d bit flips\n", num_bits(0xa, 0x2));
    printf ("125 to 65535 is %d bit flips\n", num_bits(65535, 125));
    printf ("0xa to 0x5 is %d bit flips\n", num_bits(0xa, 0x5));
    
    return 0;
}
