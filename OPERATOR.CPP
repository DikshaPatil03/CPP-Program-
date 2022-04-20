#include<iostream.h>
#include<conio.h>
class Demo
{
private:int a,b;
public :Demo()
{
}
	Demo(int x,int y);
	void show();
	Demo operator+(Demo D3);
	};
	Demo::Demo(int x,int y)
	{
	a=x;
	b=y;
	}
	void Demo::show()
	{
	cout<<"a="<<a<<endl;
	cout<<"b="<<a<<endl;
	}
	Demo::Demo operator+(Demo D3)
	{
	Demo D4;
	D4.a=a+D3.a;
	D4.b=b+D3.b;
	return(D4);
	}
	void main()
	{
	clrscr();
	Demo d1(2,5);
	Demo d2(5,2);
	Demo d5=d1+d2;
	d5.show();
	getch();
	}

