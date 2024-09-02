#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main()
{
	int INPUT, OUTPUT, macht;

	printf("Geef een getal: ");
	scanf("%d", &INPUT);
	printf("Geef machtsverhefing aan: ");
	scanf("%d", &macht);

	OUTPUT = pow(INPUT,macht);

	printf("\nUitkomst %d", OUTPUT);
}