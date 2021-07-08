#include<stdio.h>
int main()
{
	int i,j;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=70-i;j++)
			printf("%c",j);
			printf("\n");
	}
	return 0;
}
