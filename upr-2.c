#include <stdio.h>
#include <math.h>

void randWrite (double *, int );
void printArr (double *, int);
void massNew (double *, double *, int );
void quickSort (double *, int);
int main ()
{
	int size = 5;
	double mas1 [size], mas2 [size]; 
	int i;
	randWrite(mas1, size);
	randWrite(mas2, size);

	printf ("First array before sort: \n");
	printArr(mas1, size);
	printf ("Second array before sort: \n");
        printArr(mas2, size);

	quickSort (mas1, size-1);
	quickSort (mas2, size-1);	
	
	printf ("\n");
	printf ("First array after sort: \n");
        printArr(mas1, size);
        printf ("Second array after sort: \n");
        printArr(mas2, size);

	printf ("\n");
	massNew (mas1, mas2, size);
}

void randWrite (double *mas, int size)
{
	for (int i = 0; i < size; i++)
		mas [i] = rand()%100;
}

void printArr (double *mas, int size)
{
	for (int i = 0; i < size; i++)
		printf("mas [%d] = %.0lf - ", i, mas [i]);
	printf ("\n");
}

void quickSort (double *mas, int size)
{
	int i = 0;
	int j = size;
	double temp;
	double center = mas [j/2];

	while (i <=j)	{
		while (mas[i] < center) i++;
		while (mas[j] > center) j--;

		if (i <= j)
		{
			temp = mas[i];
			mas[i] = mas[j];
			mas[j] = temp;
			i++; j--;
		}
	}

	if (j > 0) quickSort(mas, j);
	if (size > i) quickSort(mas+i, size - i);
}

void massNew (double *mas1, double *mas2, int size)
{
	int sizeNew = size*2;
	double masNew[sizeNew];
	int i = 0;
	int j1 = 0; int j2 = 0;
	for (i = 0; i < sizeNew; i++)
	{
		if (mas1[j1] < mas2[j2])
		{
			masNew[i] = mas1[j1];
			j1++;
		}
		else 
		{
			masNew[i] = mas2[j2];
			j2++;
		}
		if (j1 > size) masNew[sizeNew-1] = mas2[j2];
		if (j2 > size) masNew[sizeNew-1] = mas1[j1];
	}

	printArr(masNew, sizeNew);
}
