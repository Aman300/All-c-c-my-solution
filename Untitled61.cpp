#include<stdio.h>
int add(int a,int b);
int main()
{
	int a,b,sum;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("sum is = %d\n",sum);
	return 0;
}
int add(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
