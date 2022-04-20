#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
n,i,p=1;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
    p=0;
    break;
    }
}
if(p==1)
{
     printf("prime number");
}
else
{
printf("it is not prime number");
}
getch();
}


