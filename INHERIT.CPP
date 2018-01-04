#include<iostream.h>
#include<conio.h>

class shape
{
 public:
   int a;
   void display()
   {
     cout<<"inherited";
   }
};
class circle:public shape
{
  public:
    int b;
};
int main()
{
 clrscr();
  circle cr;
  cr.display();
  return 0;
}