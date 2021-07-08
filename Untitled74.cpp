#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter the number:");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
		arr[i]=arr[i]+10;
		printf("increment ");
	for(i=0;i<10;i++)	
		printf("%d\n",arr[i]);
		
}
