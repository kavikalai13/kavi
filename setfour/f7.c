#include<stdio.h>
void sort(int n,int *p);
int main()
{
int a[10];
int n,i;
printf("enter the size");
scanf("%d",&n);
printf("enter%d values",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(n,a);
return 0;
}
void sort(int n,int *p)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(p+i)>*(p+j))
{
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
}
}
printf("the sorted array is");
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
}

