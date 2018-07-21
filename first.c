#include <stdio.h>

int ceiling(int first, int second);

int ceiling(int first, int second)
{
    int c = first % second;
    if(c ==0) {
        return first / second;       
    } else {
        return (first + second) / second;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    a = 17;
    b = 4;
    int c = ceiling(a, b);
    printf("%d\n", c);
    return 0;
}
