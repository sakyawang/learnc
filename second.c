#include <stdio.h>

int increment(int x)
{
	return x = x + 1;
}

void increment1(int* x)
{
    *x = *x + 1;
}

int main(int argc, char const *argv[])
{
    /* code */
    int i = 1, j = 2;
    increment1(&i);
    increment1(&j);
    printf("%d\n", i);
    printf("%d\n", j);
    return 0;
}
