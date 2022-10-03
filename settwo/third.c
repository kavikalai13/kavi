#include <stdio.h>

int main()
{
    int b, n, neww;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &b);
    neww = (1 << b) | n;
printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, n);
    printf("Number after setting %d bit: %d (in decimal)\n", n, neww);

    return 0;
}