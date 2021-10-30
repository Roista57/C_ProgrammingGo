// Write a program that outputs roots by receiving the coefficient values a, b, and c of the quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double root1 = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    double root2 = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);

    printf("x: %.3lf, x: %.3lf\n", root1, root2);

}
