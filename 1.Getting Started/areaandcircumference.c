/*
The length and breadth of a rectangle and radius of a circle are input thorugh
the keyboard.Write a program to the area and perimeter of the rectangle and area
and circumference of circle. 
*/

#include<stdio.h>
void main()
{
	float l,b,pr,ar,r,ac,cc;
	printf("Enter length and breadth of rectangle:-");
	scanf("%f%f",&l,&b);
	printf("Enter radius of circle:-");
	scanf("%f",&r);
	ar=l*b;
	pr=2*(l+b);
	cc=2*3.14*r;
	ac=3.14*r*r;
	printf("Area of Rectangle:-%f\nPerimeter of Rectangle:-%f\n",ar,pr);
	printf("Area of Circle:-%f\nCircumference of Circle:%f",ac,cc);
}