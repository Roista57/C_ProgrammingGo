// Write a program that finds the time during the day when the hour hand meets the minute hand.

#include <stdio.h>

// minute hand = 1m ¡æ 6¡Æ
// hour hand = 1m ¡æ 0.5¡Æ

int main()
{
    float a;
    for(int i=0;i<11;i++){
        a = 60.0*i/11;
        printf("%2dH : %2.2fM\n", i, a);
    }
}
