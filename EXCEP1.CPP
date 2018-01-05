#include<iostream.h>
#include<conio.h>
float division(int x,int y);
int main()
{
 clrscr();
 int i=50;int j=0;
 float k=0;
 k=division(i,j);
 cout<<k<<endl;
 return 0;
}
float division(int x, int y)
{
  return(x/y);
}