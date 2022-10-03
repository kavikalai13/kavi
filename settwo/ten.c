#include<stdio.h>
#include<stdlib.h>
int main()
{
   int number, rotate, Msb, size,t,Lsb,r1;
   printf("Enter any number:");
   scanf("%d",&number);
   printf("Enter number of rotations:\n");
   scanf("%d",&rotate);
   t=number;
   size = sizeof(int) * 8;
   rotate %= size;
    printf("After right rotation the value is = %d\n",rotate);
   r1=rotate;
   while(rotate--){
      Msb = (number >> size) & 1;
      number = (number << 1) | Msb;
   }
   while(r1--){
      Lsb = t & 1;
      t = (t >> 1) &(~(1<<size));
      t=t|(Lsb<<size);
   }
   printf("After right rotation the value is = %d\n",t);
   printf("After Left rotation the value is = %d\n",number);
   return 0;
}