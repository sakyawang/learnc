#include <stdio.h>

void print_parith(int number)
{
    if(number % 2 == 0) {
        printf("number %d is even.\n", number);
    } else {
        printf("number %d is odd.\n", number);
    }
}

void print_ten_digit(int number)
{
    int ten = number / 10;
    printf("number %d's ten digit is %d.\n", number, ten);
}

void print_single_digit(int number)
{
    int single = number % 10;
    printf("number %d's single digit is %d.\n", number, single);
}

int print_ten_and_single_digit(int number)
{
    int ten = number / 10;
    int single = number % 10;
    printf("number %d's ten digit is %d.\n", number, ten);
    printf("number %d's single digit is %d.\n", number, single);
}

int main(int argc, char const *argv[])
{
    /* code */
    int x = -1;
    printf("please input a number:\n");
    scanf("%d", &x);
    if(x > 0) {
        printf("x is positive.\n");
    } else {
        printf("x is negative.\n");
    }
    print_parith(x);
    print_ten_digit(x);
    print_single_digit(x);
    print_ten_and_single_digit(x);
    return 0;
}
