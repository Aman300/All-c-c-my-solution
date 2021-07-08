#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of Table:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d ",num,i,i*num);
		printf("\n");
	}
}
