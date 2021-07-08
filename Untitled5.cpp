#include<stdio.h>
int main()
{
    int i,num,digits=0;
    printf("Enter the number");
    scanf("%d",&i);
    digits=(i*(i+1))/2;
	 printf("%d\n",digits);
	 for(num=1;num<=i;num++)
	 {
	 	if(i!=num)
	 	printf("%d+",num);
	 	else
	 	printf("%d = %d",num,digits);
	 }
	  return 0;   
	   
}
