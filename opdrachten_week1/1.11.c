#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, gcd, rest;

	printf("Geef 2 getallen: ");
	scanf("%d %d", &a, &b);

	if (a < b)
	{
		gcd = b / a;

		rest = b % gcd;

	}
	else
	{
		gcd = a / b;

		rest = a % gcd;

	}


	printf("Grooste gene deler is %d en rest is %d", gcd, rest);

}