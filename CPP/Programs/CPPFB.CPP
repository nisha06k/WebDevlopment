#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,c,f=0,s=1,next;
  cout<<"enter the number of terms of fibonacci series you want";
  cin>>n;
  cout<<"first"<<n<<"terms of fibonacci series are:-"<<endl;
  for(c=0;c<n;c++)
  {
    if(c<=1)
       next=c;
    else
    {
       next=f+s;
       f=s;
       s=next;
       }
    cout<<next<<endl;
    }
   getch();
  }