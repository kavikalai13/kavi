#include <stdio.h>
int main()
{
    int b, n, neww;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &b);
    neww = n ^ (1 << b);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, neww);
    return 0;
}
