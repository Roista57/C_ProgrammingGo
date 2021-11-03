// Write a program to obtain the mean, maximum, and minimum values for the data {12, 19, 21, 34, 26, 17, 32, 29, 11, 20} and output the results.

#include <stdio.h>

int main()
{
    int number[10] = {12, 19, 21, 34, 26, 17, 32, 29, 11, 20};
    float avg = 0;
    int max = number[0];
    int min = number[0];
    for(int i=0;i<10;i++){
        if(max < number[i]){
            max = number[i];
        }
        if(min > number[i]){
            min = number[i];
        }
        avg += number[i];
    }
    printf("avg: %.2f, max: %d, min: %d\n", avg/10, max, min);

}
