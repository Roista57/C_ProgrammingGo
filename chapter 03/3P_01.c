// 1^2 + 2^2 + 3^2 + ... + i^2
// Write a program to find the first i value in which i^2 exceeds 1000.

#include <stdio.h>

int main()
{
    int sum = 0;
    int i=1;
    while(1){
        sum += i*i;
        if(sum > 1000){
            printf("i: %d\n", i);
            break;
        }
        else{
            i++;
        }
    }
}
