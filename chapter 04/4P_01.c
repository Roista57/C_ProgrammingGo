#include <stdio.h>

void prn_chr(char c, int n){
    for(int i=0;i<n;i++){
        printf("%c", c);
    }
}

int main()
{
    char c;
    int n;

    scanf("%c %d", &c, &n);
    prn_chr(c, n);
}
