#include <stdio.h>

//Flip the GIVEN bit only if it is set
int flip_given_bit_if_set(int bit, int n) {
    int part1_mask = 0, part2_mask = 0, nfirst = 0, nsecond = 0;

    /*
    1010 bit-0 0001 => 1010
    1010 bit-1 0010 => 1000
    1010 bit-2 0100 => 1010
    1010 bit-3 1000 => 0010
    */
    
    //create the mask - first step
    part1_mask = (n & (1 << bit));
    printf ("part1_mask = %x\t", part1_mask);
    part2_mask = ~part1_mask;
    printf ("part2_mask = %x bit-shifted: %x bit:%x\t", part2_mask, (1 << bit), bit);

    nfirst = n & part2_mask;
    printf ("nfirst = %x\t", nfirst);
    if (part1_mask == 1)
        nsecond = nfirst & (part2_mask);
    else
        nsecond = nfirst;
        
    printf ("nsecond = %x\n", nsecond);
    
    return nsecond;
}

int main()
{
    int number = 10;
    int bit = 1;
    int i = 0;
    
    for (i = 0; i < 4; i++) {
        printf("Number = 0x%x bit = %d result = %x\n",
            number, (1 << i), flip_given_bit_if_set(i, number));
    }

    return 0;
}
