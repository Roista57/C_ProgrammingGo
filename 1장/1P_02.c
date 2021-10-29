/* Write a program that calculates how many seconds a month is. */

#include <stdio.h>

int main()
{
    int month = 30;
    int hour = 24;
    int minute = 60;
    int second = 60;

    printf("%ds\n", month * hour * minute * second);
}
