#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void print();
int telop(int a, int b);
bool groterdan5(int a);
double Disciminant(double a, double b, double c);
float tweemaal(float x);
double Wortel(double getal);

void main()
{

	/* printf("Did is de main-functie\n");
	printf("Voer de functie uit\n");
	print();
	printf("En kkom weer terug naar main...\n");*/

	/*int resultaat = telop(2, 3);
	printf("Resultaat: %d\n", resultaat);

	int waarde = Groterdan5(4);

	printf("Resutaat van de vergelijking is %d", waarde);*/

	/*double a = 12;
	double b = 3;
	double c = -1;

	double d = Discriminant(a, b, c);

	printf("discrimnant is %.2f", d);*/


	double getal = 169;

	double wortel = Wortel(getal);

	printf("Wortel van %d is :%.2f\n", getal, wortel);

}

void print()
{
	printf("Ik print wat op het scherm....\n");

}

int telop(int a, int b)
{
	return a + b;
}

bool Groterdan5(int a)
{
	if (a > 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Discriminant(double a, double b, double c)
{
	double discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
	{
		return-1;
	}
	else
	{
		return discriminant;
	}
}

float tweemaal(float x)
{
	return 2.0 * x;
}

double Wortel(double getal)
{
	return sqrt(getal);
}