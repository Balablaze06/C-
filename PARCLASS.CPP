#include<iostream.h>
#include<conio.h>

class phone
{
  public:
     int number;
     int no;
     phone(int imei)
     {
	number = imei;
	cout<<number<<endl; // displaying number passed from object
     }
     void getdata(int n)
     {
       no = n;
     }
     void display()
     { //displaying number after getting via function
       cout<<no;
     }
     void inherit()
     {
       cout<<endl<<"this is inherited";
     }
};
int main()
{
  clrscr();
  phone ph(2345);
  ph.getdata(12435);
  ph.display();
  return 0;
}