#include<stdio.h>
void prime(int num);
int primeno,compositeno;
int main()
{
int x;
for(x=1;x<=100;x++)
{
prime(x);
}
printf(" Totalprime=%d, Totalcomposite=%d\n",primeno,compositeno);
}

void prime(int num)
{
int p,q,i;
for(int i=1;i<=num;i++)
{
if(num%i==0)
{p++;}
else
{q++;}
}
if(p==2)
{
printf(" %d-prime\n",num);
primeno++;
}
else
{
printf(" %d-composite\n",num);
compositeno++;
}
p=0;
}
