#include<iostream.h>
#include<conio.h>
class emp
{
private:
char name[20],dept[40],add[40],gen[7];
int sal,age;
public:
void get();
void put();
};
void emp::get()
{
cout<<"name of employe\n";
cin>>name;
cout<<"name of deparment\n";
cin>>dept;
cout<<"enter the address of employe\n";
cin>>add;
cout<<"salary of emplye\n";
cin>>sal;
cout<<"age of employe\n";
cin>>age;
cout<<"enter gender of employe\n";
cin>>gen;
cout<<"\n\n";
}
void emp::put()
{
cout<<"\nname\t"<<name<<"\ndeparment\t"<<dept<<"\nage\t"<<"\naddress\t"<<add<<"\nsalary\t"<<sal<<"\ngender\t"<<gen;
}
void main()
{
clrscr();
int i,no;
cout<<"enter detail number of employe";
emp e[3];
for(i=0;i<3;i++)
{
e[i].get();
clrscr();
}
cout<<"\n\tdetails of employees\n\n";
for(i=0;i<3;i++)
{
e[i].put();
cout<<"\n";
}
getch();
}
