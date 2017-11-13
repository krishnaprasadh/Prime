#include<stdio.h>
void prime(int num);
int primeno,compositeno,evennum,oddnum;
void oddeven(int number);
int main()
{
int choice=0;
printf(" Welcome To the Program\n");
printf(" 1.Check Prime or Composite\n 2.Check Odd or Even\n Choice:");
scanf("%d",&choice);
if(choice==1)
{
int x;
for(x=1;x<=100;x++)
{
prime(x);
}
printf(" Totalprime=%d, Totalcomposite=%d\n",primeno,compositeno);
}
if(choice==2)
{
int number=100;
oddeven(number);
}
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
printf(" %d-Prime\n",num);
primeno++;
}
else
{
printf(" %d-Composite\n",num);
compositeno++;
}
p=0;
}

void oddeven(int number)
{
int i;
for(int i=1;i<=number;i++)
{
if(i%2==0)
{
printf(" %d-Even\n",i);
evennum++;
}
else
{
printf(" %d-Odd\n",i);
oddnum++;
}
}
printf(" TotalOdd=%d, TotalEven=%d\n",oddnum,evennum);
}
