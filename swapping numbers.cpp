#include<stdio.h>
//swapping two numbers
main(){
	int a,b,c;
	printf("enter number1:");
	scanf("%d",&a);
	printf("enter number2:");
	scanf("%d",&b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("-----------------------------------------------------------------------\n");
	printf("AFTER SWAPPING\n");
	printf("-----------------------------------------------------------------------\n");
	printf("number1=%d\n",a);
	printf("number2=%d",b);
	return 0;
	
	
}