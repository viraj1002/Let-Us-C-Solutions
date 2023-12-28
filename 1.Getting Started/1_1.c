#include<stdio.h>
void main()
{
	float bp,da,ra,grs;
	printf("Enter Basic Salary:-");
	scanf("%f",&bp);
	da=0.4*bp;
	ra=0.2*bp;
	grs=bp+da+ra;
	printf("grs:-%f\n",grs);
	printf("da:-%f\n",da);
	printf("ra:-%f\n",ra);
}