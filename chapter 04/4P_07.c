// Write an isLeapYear() function that determines the leap year. Return 1 for leap years, otherwise 0.

#include <stdio.h>

int isLeapYear(int year){
    if(year%4 == 0 && year%100 != 0 || year%400 == 0){
        return 1;
    }
    return 0;
}

int main()
{
    int year;
    scanf("%d", &year);
    printf("%d\n", isLeapYear(year));
}
