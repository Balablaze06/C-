#include<iostream.h>
#include<conio.h>

class shape
{
  public:
    virtual void draw() = 0;

};
class circle:public shape
{
  public:
      void draw()
      {
	cout<<"circle executed";
      }
};
class rectangle: public shape
{
 public:
    void draw()
    {
     cout<<"Rectangle executed";
    }
};
int main()
{
  clrscr();
  circle cr;
  rectangle rec;
  rec.draw();
  cr.draw();
  return 0;
}