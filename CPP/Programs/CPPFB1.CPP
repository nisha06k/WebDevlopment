#include<iostream.h>
#include<conio.h>
int fibonacci(int);
void main()
{
 clrscr();
  int count;
  cout<<"enter range of fibonacci series";
  cin>>count;
  for(int i=0;i<count;i++)
  {
    cout<<" "<<fibonacci(i)<<" ";
    }
   getch();
  }
  int fibonacci(int num)
  {
   if(num==1)
   {
     return 1;
     }
   else if(num==0)
   {
    return 0;
    }
   else
   {
     return fibonacci(num-1)+fibonacci(num-2);
   }
   }

