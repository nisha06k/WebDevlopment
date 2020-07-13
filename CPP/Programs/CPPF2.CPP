#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int factor=1;
 int n;
 cout<<"enter a number to find its factorial \n";
 cin>>n;
 while(n>1){
 factor=factor*n--;
 }
 cout<<"\nfactorial is"<<factor;
 getch();
 }