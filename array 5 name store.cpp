#include<stdio.h>
int table(int num)
{
	int i;
	scanf("%d",&num);
	for(i=1;i<=10;i++)
		printf("%d x %d = %d\n",num,i,num*i);
}
int add()
{
	
	printf("Table of ");
}
int main()
{
	char arr[5][20];
	int i;
	printf("Enter the name of student:");
	for(i=0;i<5;i++)
		scanf("%s",arr[i]);
	for(i=0;i<5;i++)
		printf("[%d] = %s\n",i,arr[i]);	
		int num;
		add();
		table(num);	
}

