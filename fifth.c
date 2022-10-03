#include <stdio.h>
int main()
{
    int n, b, neww;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &b);
    neww = n & (~(1 << b));

    printf("Number after clearing %d bit: %d \n", n, neww);
    return 0;
}