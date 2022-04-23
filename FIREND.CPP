#include<iostream.h>
#include<conio.h>
class  demo
 {
    private :int a
    public: void friend show();
 };
 friend void show  (demo d1)
{
  demo::demo()
{
  a=0;
}
void show(demo.d1)
{
cout<<d1.a;
}
main()
{
demo d;
show.(d);
}