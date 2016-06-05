#include <stdio.h>
#include <math.h>

void randWrite (double *, int );
void printArr (double *, int);
void quickSort (double *, int);
int binarySearch (double *, int);

int main ()
{
	int size = 10;
	double mas[size]; 

	randWrite(mas, size);

	printf ("Array before sort: \n");
	printArr(mas, size);

	quickSort (mas, size-1);
	
	printf ("\n");
	printf ("Array after sort: \n");
        printArr(mas, size);

	printf ("\n");
	binarySearch (mas, size-1);
}

void randWrite (double *mas, int size)
{
	for (int i = 0; i < size; i++)
		mas [i] = rand()%100;
}

void printArr (double *mas, int size)
{
	for (int i = 0; i < size; i++)
		printf("mas [%d] = %.0lf\n", i, mas [i]);
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

int binarySearch (double *mas, int size)
{
	int left, right;	
	left = 0; right = size;
	int middle;

	double search;
	printf("Please, enter element from array: ");
	scanf ("%lf", &search);
	
	while (left <= right)
	{
		middle = (left + right)/2;
		printf("left = %d, right = %d, middle = %d\n", left, right, middle);
		if (mas[middle] == search)
		{	
			printf("Your's element has number %d in sort array\n", middle);
			return 0;
		}
		else 
			if (mas[middle] < search) left = middle;
			else right = middle;
	}
}
