#include<stdio.h>
float squar(float);
int main()
{
	float a,add;
	printf("Enter the the value:");
	scanf("%f",&a);
	add=squar(a);
	printf("squar is = %f",add);
    return 0;
}
float squar(float x)
{
	float y;
	y=x*x;
	return y;
}
