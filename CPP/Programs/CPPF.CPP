#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  int i,n,fact=1;
  cout<<"\nENTER THE VALUE OF n \n ";
  cin>>n;
  for(i=n;i>=1;i--)
  fact=fact*i;
  cout<<"\n FACTORIAL="<<fact;
  getch();
  return(0);
  }