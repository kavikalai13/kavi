#include<stdio.h>
int main()
{
int a[10][10],i,j,n;
printf("enter the size");
scanf("%d",&n);
printf("enter  matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("acces the matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",*(*(a+i)+j));
}
printf("\n");
}
return 0;
}
