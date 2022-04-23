#include<iostream.h>
#include<conio.h>

class Add {

public:
  int addition(int x,int y) {
     return x+y;
     }
     };
     int main() {

      int x,y,s;
      clrscr();

      cout<<"Enter two number:";
      cin>>x>>y;

      Add obj;
      s=obj.addition(x,y);

      cout<<"Sum of two number:"<< s;
      getch();

      return 0;
      }