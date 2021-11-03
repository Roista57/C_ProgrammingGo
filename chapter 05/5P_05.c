// If you enter the year, month, and day, write a program that tells you the day of the week.

#include <stdio.h>

int main()
{
    int year, mon, day;
    int sum;
    int month[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    char dayOfTheWeek[7][10] ={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    year = 2021;
    mon = 11;
    day = 3;

    sum = year*365 + year/4 - year/100 + year/400 -1;
    if(year%4 == 0 && year%100 != 0 || year%400 == 0){
        for(int i=0;i<mon-1;i++){
            sum += month[1][i];
        }
    }
    else{
        for(int i=0;i<mon-1;i++){
            sum += month[0][i];
        }
    }
    printf("%s\n", dayOfTheWeek[(sum + day)%7]);
}
