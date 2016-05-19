#include <stdio.h>
#include <math.h>

void randWrite (double *, int );
int srAriphm (double *, int);
int srKvOtkl (double *, int, double);

int main ()
{
	int size = 10;
	double mas [size];
	double srariphm;
	int i;
	randWrite(mas, size);
	for (int i = 0; i < size; i++) 
		printf("mas[%d] = %.0lf\n", i, mas[i]);
	srariphm = srAriphm(mas, size);
	srKvOtkl (mas, size, srariphm);
}

void randWrite (double *mas, int size)
{
	for (int i = 0; i < size; i++)
		mas [i] = rand()%100;
}

int srAriphm (double *mas, int size)
{
	double a;
	for (int i = 0; i < size; i++)
		a += mas[i];
	a = a/10;

	printf("\na = %lf\n",a);
	return a;
}

int srKvOtkl (double *mas, int size, double srariphm)
{
	double srkvotkl = 0;;
	for (int i = 0; i < size; i++)
	{	srkvotkl += (mas [i] - srariphm)*(mas [i] - srariphm);
	printf ("srkvotkl = %lf\n",srkvotkl);
	}
	srkvotkl = srkvotkl/100;
	printf ("\nsrkvotkl = %lf\n",srkvotkl);
	srkvotkl = sqrt(srkvotkl);
	printf ("\nsrkvotkl = %lf\n",srkvotkl);
	return srkvotkl;
}
