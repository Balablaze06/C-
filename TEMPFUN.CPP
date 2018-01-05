#include<iostream.h>
#include<conio.h>
#include<generic.h>

template <class T>
inline T display(T a, T b)
{
  cout<<a<<endl<<b<<endl;
  return 0;
}
int main()
{
  clrscr();
  display(1,2);
  display("a","b");
  return 0;
}