#include<iostream.h>
#include<conio.h>
class cost;
class book
{
 private:
	  int bcode;
	  char bname[10];
	  int ncopies;
	  int rate;
 public:
	  void get();
	  void display();
	  friend cost;
};
void book::get()
{
  cout<<"enter the book code";
  cin>>bcode;
  cout<<"enter book name";
  cin>>bname;
  cout<<"ente no of copies";
  cin>>ncopies;
  cout<<"ente name of book";
  cin>>rate;
}
void book::display()
{
  cout<<"book code is:"<<bcode<<endl;
  cout<<"book name is:"<<bname<<endl;
  cout<<"book copies is:"<<ncopies<<endl;
  cout<<"book rate is:"<<rate<<endl;
}

class cost
{
 private:
	 int amt;
 public:
	 void cal(book b);
};


void cost::cal(book b)
{
  amt=b.ncopies*b.rate;
  cout<<"amount of book:"<<amt;
}
void main()
{
 clrscr();
 book b1;
 b1.get();
 b1.display();
 cost c;
 c.cal(b1);
 getch();
}
