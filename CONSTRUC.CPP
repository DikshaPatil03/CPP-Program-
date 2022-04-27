#include<iostream.h>
#include<conio.h>
class demo
{
private: int a,b;
public :demo();
		demo(int x,int y);
		demo(demo &p);
		void display();
		};
demo::demo()
{
cout<<"The default constructor"<<endl;
}
demo::demo(int x,int y)
{
cout<<"The parametarized constructor"<<endl;
a=x;
b=y;
}
demo::demo(demo &p)
{
cout<<"The copy constructor"<<endl;
a=p.a;
b=p.b;
}
void demo::display()
{
cout<<" the value of a:"<<a<<endl;
cout<<"the value of b:"<<b<<endl;
}
void main()
{
clrscr();
demo d;
demo d1(10,20);
demo d2=d1;
d2.display();
getch();
}