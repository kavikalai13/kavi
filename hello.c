#include<stdio.h>
int main()
{
  float fa,ce;
  float lo,up,step;
  lo=0;
  up=300;
  step=20;
  fa=lo;
  while(fa<=up)
  {
      ce=(5.0/9.0)*(fa-32.0);
      printf("%3.0f\n",fa);
      printf("%7.1f\n",ce);
      fa=fa+step;

  }
  return 0;
}