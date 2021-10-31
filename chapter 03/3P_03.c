// Write a program that calculates the sum of odd numbers from 1 to n and the sum of even numbers by reading the positive integer n.
// Write a program using a single for loop with a comma operator,
// a program using two for loop without a comma operator, or a program using only a while loop.

#include <stdio.h>

int main()
{
    int i, j;
    int n;
    int oddSum = 0;
    int evenSum = 0;
    scanf("%d", &n);

    // for loop with a comma operator.
    for(i=1, j=2;i<=n, j<=n;i+=2, j+=2){
        oddSum += i;
        evenSum += j;
    }
    printf("odd number: %d, even number: %d\n", oddSum, evenSum);

    // for loop without comma operator
    oddSum = 0;
    evenSum = 0;
    for(i=1;i<=n;i+=2){
        oddSum += i;
    }
    for(i=2;i<=n;i+=2){
        evenSum += i;
    }
    printf("odd number: %d, even number: %d\n", oddSum, evenSum);

    // while loop
    oddSum = 0;
    evenSum = 0;
    i = 1;
    while(i <= n){
        if(i%2 != 0){
            oddSum += i;
        }
        else{
            evenSum += i;
        }
        i++;
    }
    printf("odd number: %d, even number: %d\n", oddSum, evenSum);
}
