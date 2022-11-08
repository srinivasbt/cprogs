#include <stdio.h>

int fact (int n) {

    if (n == 1) {
        return n;
    }
    
    return (n * fact (n-1));
}

int main()
{
    int fact_num = 5;
    int fact_result = 0;

    fact_result = fact (fact_num);
    
    printf ("Factorial of: %d is: %d \n", fact_num, fact_result);
}
