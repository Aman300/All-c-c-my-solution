#include<stdio.h>
int array(int i,int arr[10]);
int  main()
{	
	int v,rrr[10];
	printf("Enter the number:");
	array(v,rrr);
	return 0;	
}
int array(int v,int rrr[10])
{
	int i,arr[10];
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<10;i++)
	printf("[%d] = %d\n",i,arr[i]);
}
