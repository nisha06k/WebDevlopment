#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,f=1,num;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);
	while(i<=num){
	    f=f*i;
	    i++;
	}
	printf("\nFactorial of %d is: %d",num,f);
	getch();
}