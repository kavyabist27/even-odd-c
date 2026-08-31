#include <stdio.h>

void greet(const char *name)
{
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

int main()
{

    int num;
    greet("Ada");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}