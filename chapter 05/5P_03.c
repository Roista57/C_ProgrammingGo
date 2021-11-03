// Write a function c that returns the average of all the elements by receiving an integer array of magnitude n.

#include <stdio.h>

float avg(int num[], int n){
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += num[i];
    }
    return sum/n;
}

int main()
{
    int number[10] = {12, 19, 21, 34, 26, 17, 32, 29, 11, 20};
    printf("%.2f\n", avg(number, 10));
}
