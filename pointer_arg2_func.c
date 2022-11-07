#include <stdio.h>

int d = 5;

void func (int *c) {
    c = &d;
}

int main () {
int a = 10;
int *b = &a;

func(b);

printf("a is %d, *b is %d", a, *b);
}

/* Temp variable created in the called function,
 *will not change the callee's pointer unless returned
 *from the called funtion and assigned back
 */ 
#if 0
int d = 5;
int * func (int *c) {
    c = &d;
    return c;
}

int main () {
    int a = 10;
    int *b = &a;

    func(b);
    printf("a is %d, *b is %d", a, *b);
}
#endif
