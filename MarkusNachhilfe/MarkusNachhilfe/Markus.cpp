#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5.50
#define WIDTH 3.00
#define HEIGTH 4.80

double calcVolume();
double calcArea();
void printVolume(double volume);
void printArea(double area);


int main()
{
	//double volume = calcVolume();
	//double area = calcArea();

	//printVolume(volume); //nicht printvolume (double volume); double ist schon klar weil in paramterliste der eigentlichen funktion double steht variable volume nimmt double volume an?!
	//printArea(area); //Funktionsaufrufe eehhh nicht so ganz gerafft Paramterübergabe durch Variablen?!

					 //printVolume(calcVolume()); 
					 //printArea(calcArea()); //Funktionsaufruf mit Paramterübergabe

	printVolume(calcVolume());
	printArea(calcArea());


	system("pause");
}

double calcVolume()
{
	double a = LENGTH, b = WIDTH, c = HEIGTH; //kann aus int double werden ohne verlust? ja?
	double volume = a * b*c;

	return volume;
}

double calcArea()
{
	double a = LENGTH, b = WIDTH, c = HEIGTH;
	double area = 2 * (a*b + b * c + a * c);

	return area;
}

void printVolume(double volume)
{
	printf("Area\t%f\n", volume);
}

void printArea(double area)
{
	printf("Volume\t%f\n", area);
}