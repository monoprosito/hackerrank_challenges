#include <stdio.h>

int absolute(int n);

int absolute(int n)
{
    if (n < 0)
        n *= -1;
    return (n);
}

void update(int *a,int *b) {
    int sum = *a + *b;
    int abs = absolute(*a - *b);
    *a = sum;
    *b = abs;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
