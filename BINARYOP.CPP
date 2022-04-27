#include<iostream.h>
#include<conio.h>
class Demo
{
private:int a,b;
public :void get();
		void display();
		Demo operator+(Demo&D3);
};
void Demo::get()
{
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
}
void Demo::display()
{
cout<<a<<endl;
cout<<b<<endl;
}
Demo Demo::operator+(Demo&D3)
{
Demo D5;
D5.a=a+D3.a;
D5.b=b+D3.b;
return(D5);
}
void main()
{
clrscr();
Demo D1,D2,D4;
D1.get();
D2.get();
D4=D1+D2;
D4.display();
getch();
}

