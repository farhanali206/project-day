#include <stdio.h>
int main()
{
    int x;
    printf("enter the first number :");
    scanf("%d", &x);
    int y;
    printf("enter the second number:");
    scanf("%d", &y);
    if (x < 70)
    {
        printf("order complete\t");
    }
    else
    {
        printf("\norder limit reached");
    }
    if (y < 70)
    {
        printf("\norder completed");
    }
    else
    {
        printf("\norder limit reached");
    }
    printf("\nTHANK YOU ");
    return 0;
}
