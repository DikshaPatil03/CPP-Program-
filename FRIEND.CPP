#include<iostream.h>
#include<conio.h>
class one
{
int a,b,c;
	public:
		void setA(int x,int y);
		{
		a=x;
		b=y;
		}
		friend int add(one);
		};
		int add(one p)
		{
		return p.a+p.b;
		}
		void main()
		{
		int sum,a,b;
		clrscr();
		one q1;
		cout<<"\n enter the value A:";
		cin>>a>>b;
		q1.setA(a,b);
		cout<<"\n addition of A+B:"<<sum;
		getch();
		}