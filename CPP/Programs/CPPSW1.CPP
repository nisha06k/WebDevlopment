#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,temp;
 cout<<"enter two numbers\n";
 cin>>a>>b;
 cout<<"values before swapping are a="<<a<<"\nb="<<b;
 temp=a;
 a=b;
 b=temp;
 cout<<"\nSWAPPED VALUES ARE a="<<a<<"\nb="<<b;
 getch();
 }
