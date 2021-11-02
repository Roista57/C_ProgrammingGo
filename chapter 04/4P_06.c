// Construct a function that contains a static variable that remembers the number of times a function has been called, and write a program that uses that function to find the number of numbers in the input string until EOF.

#include <stdio.h>

int input(char c){
    int count = 0;
    while(c != EOF){
        if(c >= '0' && c <= '9'){
            count++;
        }
        c = getchar();
    }
    return count;
}

int main()
{
    char c;
    printf("%d\n", input(c = getchar()));
}
