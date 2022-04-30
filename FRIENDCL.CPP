#include<iostream.h>
#include<conio.h>
class B;
class A
{
 private: int a;
 public : A(int x);
	  friend B;
};
class B
{
 private: int b;
 public : B(int y);
	  void add(A &x);
};
A::A(int x)
{
  a=x;
}
B::B(int y)
{
 b=y;
}
void B::add (A &x)
{
 cout<<x.a+b;
}
void main()
{
 clrscr();
 A p(10);
 B q(20);
 q.add(p);
getch();
}