#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 int a;
 cin>>a;
 try{
    if(a<500)
    {
      throw 'e';
    }
    else if(a>500 && a<1000)
    {
     throw 2;
     }

 }
 catch(int b)
 {
   cout<<endl<<"global error";
   return -1;
 }
 catch(char st)
 {
  cout<<endl<<"500 error";
  return -1;
 }
 catch(...)
 {
   cout<<endl<<"unknown exception";
   return -1;
 }
}