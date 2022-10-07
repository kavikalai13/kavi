#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,n;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("enter first matrix");
scanf("%d",(*(a+i)+j));
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("enter second matrix");
scanf("%d",(*(b+i)+j));
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
printf("%d",*(*(c+i)+j));
}
printf("\n");
}
}
