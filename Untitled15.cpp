#include<stdio.h>
int addresult(int n1,int n2);
int main()
{
	int a,b,sum;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	sum=addresult(a,b);
	printf("sum is = %d",sum);
	return 0;
}
int addresult(int n1,int n2)
{
	int m;
	m=n1+n2;
	return m;
}
