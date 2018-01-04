#include<iostream.h>
#include<conio.h>

class shape
{
 public:
   int a;
   void display()
   {
     cout<<" base level inherited"<<endl;
   }
};
class circle:public shape
{
  public:
    void disp()
    {
      cout<<endl<<"child inherited";
    }
};
class point:public circle
{
  public:
    void displ()
    {
      cout<<endl<<"great child inherited";
    }
};
int main()
{
 clrscr();
  point po;
  po.display();
  po.disp();
  po.displ();
  return 0;
}