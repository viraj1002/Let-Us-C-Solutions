#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,t;
	printf("Enter values of A and B:");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("A:%d\nB:%d",a,b);
}