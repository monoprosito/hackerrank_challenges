#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    float c = 0, d = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    a = a + b;
    b = a - (b * 2);
    c = c + d;
    d = c - (d * 2);

	printf("%d %d\n", a, b);
	printf("%.1f %.1f\n", c, d);

    return 0;
}
