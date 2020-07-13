#include<iostream.h>
#include<conio.h>
void swap(int x,int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  cout<<"\nvalues after swapping are\n";
  cout<<"a="<<x<<"\nb="<<y;
  return;
  }
void main()
{
  clrscr();
  int a,b;
  cout<<"enter two values\n";
  cin>>a>>b;
  cout<<"values before swapping are\n";
  cout<<"a="<<a<<"\nb="<<b;
  swap(a,b);
  getch();
  }

