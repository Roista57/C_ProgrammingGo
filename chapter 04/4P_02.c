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
