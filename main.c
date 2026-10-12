#include <stdio.h>

void func(void)
{
    int x;

    printf("func x is at %p", &x);
}


int main(void) {
    int x;

    printf("main is at %p", &x);
    func();
    return 0;

}
