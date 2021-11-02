// Write a function bitcount() that returns the value by counting the number of bits in the binary representation of the unsigned integer x as 1.

#include <stdio.h>

int bitcount(int x, int c){
    if(x > 0){
        if(x%2 == 1){
            c++;
        }
        x /= 2;
        return bitcount(x, c);
    }
    return c;
}


int main()
{
    int c = 0;
    int x;
    scanf("%d", &x);
    printf("%d\n", bitcount(x, c));
}
