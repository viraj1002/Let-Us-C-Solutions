/*
Temperature of a city in Farhient derees is input through the keyboard.
Write a program to convert this temperture into Centigrade degrees.
*/

#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter temperature in Farhient:-");
	scanf("%f",&f);
	c=(f-32)*(5/9);
	printf("Temperature in Centigrade:-%f",c);
}