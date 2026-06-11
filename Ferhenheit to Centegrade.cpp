#include<stdio.h>
#include<conio.h>
int main()
{
	int f;
	float c;
	printf("enter the temperature in ferhenhite:-");
	scanf("%d",&f);
	printf("\nCHECK....%d",f);
	c=(.56)*(f-32);
	printf("\nTemperature in Celciuos:- %.2f",c);
	getch();
}
