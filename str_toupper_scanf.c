#include <stdio.h>
#include <ctype.h>
#define ARRAY_LEN 10

int
main ()
{
  char *test_str = "hello manasdfasdfasdf";

  int i = 0;
  char *ptr2_inp_arr = test_str;
  char output_arr[ARRAY_LEN];

  /*
     Scanf scans the string only upto first space in string.
   */
  //printf("Enter string: \n");
  //scanf("%s", &inp_str);
  //inp_str[9] = '\0';

  while (*ptr2_inp_arr && i < ARRAY_LEN - 1)
    {
      output_arr[i] = toupper ((unsigned char) *ptr2_inp_arr);
      i++;
      ptr2_inp_arr++;
      //if (i >= ARRAY_LEN) break;
      /* "i <= ARRAY_LEN" doesn't work) */
    }
  output_arr[ARRAY_LEN - 1] = '\0';
  printf ("inp_str:\t %s\noutput_arr:\t %s\n", test_str, output_arr);

  return 0;
}
