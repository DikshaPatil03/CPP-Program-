#include<iostream.h>
#include<conio.h>
class unary
{
private:int a,b,c;
public :void get();
	void display();
	void operator-();
};
void unary::get()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"enter the value of c:";
cin>>c;
}
void unary:: display()
{
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
void unary::operator-()
{
a=-a;
b=-b;
c=-c;
}
void main()
{
clrscr();
unary u;
u.get();
u.display();
-u;
u.display();
getch();
}