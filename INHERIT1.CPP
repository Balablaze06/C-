#include<iostream.h>
#include<conio.h>

class shape
{
 public:
   int a;
   void display()
   {
     cout<<" base inherited"<<endl;
   }
};
class circle:public shape
{
  public:
    int b;
    void display()
    {
       cout<<"child display"<<endl;
    }
};
int main()
{
 clrscr();
  circle cr;
  cr.display();
  return 0;
}