// Write a program that receives characters from the keyboard until the EOF is entered and outputs the number of characters corresponding to number.

#include <stdio.h>

int main()
{
    char c;
    int count = 0;

    c = getchar();

    while(c != EOF){
        if(c >= 48 && c <= 57){
            count++;
        }
        c = getchar();
    }
    printf("int count: %d\n", count);
}
