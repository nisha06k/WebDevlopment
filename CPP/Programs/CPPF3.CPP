#include<iostream.h>
#include<conio.h>
int fact(int x)
{
  if(x==1)
  {
    return 1;
    }else
    {
      return x*fact(x-1);//recursion
      }
    }
int main()
{
  clrscr();
  cout<<"Factorial is" <<fact(5)<<endl;
  getch();
  }