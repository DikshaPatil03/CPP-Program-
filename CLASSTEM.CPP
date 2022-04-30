#include<iostream.h>
#include<conio.h>
template<class T>
class demo
{
 private:
	 T a , b;
 public:
	 demo(T x,T y)
	 {
	  a=x;
	  b=y;
	 }
	 void swap()
	 {
	   T t;
	   t=a;
	   a=b;
	   b=t;
	cout<<" \n\n After swapping Value are"<<endl;
	cout<<"After swapping value of A is ="<<a<<endl;
	cout<<"Ater swapping Value of B is ="<<b<<endl;
	}
 }
 void main()
 {
 clrscr();
 demo<int>d(5,6);
 d.swap();
 demo<float>d1(10.2,15.5);
 d1.swap();
 demo<char>d2('A','B');
 d2.swap();
 getch();
}
