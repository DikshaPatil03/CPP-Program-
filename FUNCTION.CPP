#include<iostream.h>
#include<conio.h>
template<class t>
void add(t x,t y)
{
 t z;
 z=x+y;
 cout<<"value of Z is:"<<z<<endl;
};
void main()
{
 int x,y;
 clrscr();
 add(2,4);
 add(2.8,4.5);
 getch();
}







