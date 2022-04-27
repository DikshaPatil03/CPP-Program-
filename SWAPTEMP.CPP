
#include<iostream.h>
#include<conio.h>
template<class t>
void swap(t a,t b)
{
 t z;
 z=a;
 a=b;
 b=z;
 cout<<"value of A after Swap"<<a<<endl;
 cout<<"value of B after swap"<<b<<endl;
};
void main()
{
 int x,y;
 float l,m;
 clrscr();
 cout<<"Enter the value of x"<<endl;
 cin>>x;
 cout<<"Enter the value of y"<<endl;
 cin>>y;
 cout<<"Enter the value of L"<<endl;
 cin>>l;
 cout<<"Enter the value M"<<endl;
 cin>>m;
 swap(x,y);
 swap(l,m);
 getch();
}







