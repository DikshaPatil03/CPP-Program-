#include<iostream.h>
#include<conio.h>
class art
{
	protected:
		char name[20];
		int mark;
	public:
		void get()
		{
			cout<<"\nEnter the name of student:\n";
			cin>>name;
			cout<<"\nEnter the mark of student:\n";
			cin>>mark;
		}
};
class result:public art
{
	public:
		void display()
		{
			cout<<"\nName of student:\n"<<name;
			cout<<"\nMark of student:\n"<<mark;
		}
};
void main()
{
	clrscr();
	result r;
	r.get();
	r.display();
	getch();
}