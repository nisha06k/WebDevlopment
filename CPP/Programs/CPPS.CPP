#include<iostream.h>
#include<conio.h>
float sum(float a,float b)
{
   float su;
   su=a+b;
   return su;

   }
void main()
{
    clrscr();
    float s,x,y;
    cout<<"enter two numbers";
    cin>>x>>y;
    s=sum(x,y);
    cout<<"SUM OF THE GIVEN NUMBERS IS\n"<<s;
   getch();
   }

