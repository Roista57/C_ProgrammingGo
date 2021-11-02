// Write a program to find the value of the Fibonacci series nth.

#include <stdio.h>

// An error occurs from number 79.
double fibonacci(double a, double b, int count){
    double temp;
    if(count > 1){
        temp = a; a = b; b = temp + a;
        count --;
        return fibonacci(a, b, count);
    }
    else if (count == 0){
        return a;
    }
    else{
        return b;
    }

}

int main()
{
    double a = 0;
    double b = 1;
    int n;
    scanf("%d", &n);
    printf("fibonacci: %.0lf\n", fibonacci(a, b, n));
}
