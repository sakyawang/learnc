#include <stdio.h>

void foo()
{
    int i;
    printf("%d\n", i);
    i = 777;
}

void foo2()
{
    foo();
}

int main(int argc, char const *argv[])
{
    /* code */
    void foo();
    foo2();
    printf("----\n");
    foo2();
    return 0;
}
