// Read the integer n and write a program that adds integers from n to 2*n if n is not a negative number,
// and adds integers from 2*n to n if n is a negative number.
// At this time, write two programs using the for loop and the while loop.

#include <stdio.h>

int main()
{
    // for loop
    int n;
    int i;
    int sum = 0;
    scanf("%d", &n);
    if(n >= 0){
        for(i=n;i<=2*n;i++){
            sum += i;
        }
    }
    else{
        for(i=2*n;i<=n;i++){
            sum += i;
        }
    }
    printf("[for loop]sum: %d\n", sum);


    // while loop
    sum = 0;
    if(n >= 0){
        i = n;
        while(i<=2*n){
            sum += i;
            i++;
        }
    }
    else{
        i = 2*n;
        while(i<=n){
            sum += i;
            i++;
        }
    }
    printf("[while loop]sum: %d\n", sum);
}
