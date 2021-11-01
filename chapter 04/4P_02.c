// Read the values of n and m from main(),
// transfer them to the arguments of the function that calculates nCm,
// and write a program that returns them to main().

#include <stdio.h>

int factorial(int n){
    int mul=1;
    int count = n;
    for(int i=0;i<count;i++, n--){
        mul *= n;
    }
    return mul;
}

int main()
{
    int n, m;
    int combination;
    scanf("%d %d", &n, &m);
    combination = factorial(n) / (factorial(n-m) * factorial(m));
    printf("%d\n", combination);
}
