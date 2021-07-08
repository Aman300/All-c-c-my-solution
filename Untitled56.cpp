#include<stdio.h>
int main()
{
	int arr[50],i,num,pos;
	printf("Enter the size of number:");
	scanf("%d",&num);
	
	printf("Enter the %d number:",num);
	
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter the pos..  number:");
	scanf("%d",&pos);
	if(pos>=num+1)
		printf("Not deleated:");
	else
	{	
	for(i=pos-1;i<num-1;i++)
		arr[i]=arr[i+1];
	printf("Resultant  array is\n");	
	for(i=0;i<num-1;i++)	
		printf("%d",arr[i]);
	}
return 0;
}
