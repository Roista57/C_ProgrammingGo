// Write a program to seek a exponentiation.

#include <stdio.h>

int exponentiation(int m, int n, int exp){
    if(n > 0){
        exp *= m;
        n--;
        return exponentiation(m, n, exp);
    }
    else{
        return exp;
    }
}

int main()
{
    int m, n;
    int exp = 1;
    scanf("%d %d", &m, &n);
    printf("%d\n", exponentiation(m, n, exp));

}
