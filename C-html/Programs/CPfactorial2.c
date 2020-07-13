#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,f=1,num;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
      f=f*i;
	printf("\nFactorial of %d is: %d",num,f);
	getch();
}


