#include <stdio.h>

int main()
{
    int b, n, neww;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to get (0-31): ");
    scanf("%d", &b);
    neww = (n >> b) & 1;
    printf("Number after get %d bit: %d (in decimal)\n", n, neww);

    return 0;
}