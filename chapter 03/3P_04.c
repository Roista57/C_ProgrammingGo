// Read the students' scores using the switch statement and the while statement,
// and write a program that separates the credits and outputs the scores and credits as shown below.
// When a negative integer is input, the program is terminated.

#include <stdio.h>

int main()
{
    int n = 0;
    while(n >= 0){
        scanf("%d", &n);
        if(n < 0){
            break;
        }
        switch(n/5){
            case 20 :
            case 19 : printf("A+\n"); break;
            case 18 : printf("A\n"); break;
            case 17 : printf("B+\n"); break;
            case 16 : printf("B\n"); break;
            case 15 : printf("C+\n"); break;
            case 14 : printf("C\n"); break;
            case 13 : printf("D+\n"); break;
            case 12 : printf("D\n"); break;
            default : printf("F\n"); break;
        }
    }
}
