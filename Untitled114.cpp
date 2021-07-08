#include<stdio.h>
#include<string.h>
int main()
{
	char arr[5][20];
	int i;
	printf("Enter the name of student:");
	for(i=0;i<5;i++)
		scanf("%s",arr[i]);
	for(i=0;i<5;i++)
		printf("[%d] = %s\n",i,arr[i]);		
}
