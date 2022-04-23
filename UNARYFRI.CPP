#include<iostream.h>
#include<conio.h>
class unary
{
private : int a,b,c;
public : void get();
	 void put();
	friend void operator-(unary &x);
};
void unary::get()
{
 cout<<"enter value of a :";
 cin>>a;
 cout<<"enter value of b :";
 cin>>b;
 cout<<"enter value of c :";
 cin>>c;
}
void unary::put()
{
 cout<<"value of a is:"<<a<<endl;
 cout<<"value of b is:"<<b<<endl;
 cout<<"value of c is:"<<c<<endl;
}
void operator-(unary &x)
{
 x.a= -x.a;
 x.b= -x.b;
 x.c= -x.c;
}
void main()
{
 clrscr();
 unary U1;
 U1.get();
 -U1;
 U1.put();
 getch();
}

