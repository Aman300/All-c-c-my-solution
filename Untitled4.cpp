#include<stdio.h>
int main()
{
	 int a,b,c;
	 printf("Enter the table:");
	 scanf("%d",&a);
	 for(a=1;a<=10;a++)
	 {
	 	for(b=0;b<=10;b++)
	 	printf("%d\t",a*b);
	 }
	 
	 return 0;
}
