#include <stdio.h>

int main()
{
    unsigned char reg_val = 0xf;
    unsigned char num_of_pos = 0;
    
    for (; reg_val > 0; ) {
        //printf ("num_pos = %x num_of_pos = %x reg_val = %x\n",
        //    num_of_pos, (1 << num_of_pos), reg_val);

        printf ("reg: %x bit_pos = %x %s\n",
            reg_val, (1 << num_of_pos), (reg_val & (1 << num_of_pos))?"set":"unset");

        num_of_pos++;
        if (num_of_pos/4) reg_val--;
        if (num_of_pos > 3) num_of_pos = 0;
        //bit_pos++;    /* Doesnt work, same as inc in loop condition */
    }

}
