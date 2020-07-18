#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];

    scanf("%[^\n]%*c", (char *)&s);
    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}
