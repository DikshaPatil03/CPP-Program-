#include<iostream.h>
#include<conio.h>
class binary
{
 private: int a,b;

 public: void get();
	 void display();

};
friend binary operator+(binary &s,binary &s1);

void binary::get()
{
 cout<<"enter the value of a";
 cin>>a;
 cout<<"enter the value of b";
 cin>>b;
};
void binary::display()
{
 cout<<"Value of a is:"<<a<<endl;
 cout<<"Value of b is:"<<b<<endl;
};
binary operator+(binary &s,binary &s1)
{
  s3
  s3.a=s.a+s1.a;
  s3.b=s.b+s1.b;
};
void main()
{
 clrscr();
 binary b1,b4;
 b1.get();
 binary b2;
 b2.get();
 b1.display();
 b2.display();
 b4=b1+b2;
 b4.display();
 getch();
}

 b.put();
