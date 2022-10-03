#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;
 printf("%d",sizeof(int));
    printf("Enter any number: ");
    scanf("%d", &num);
    msb = 1 << (BITS - 1);
    printf("%d\n",BITS);
     printf("%d\n",msb);
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}