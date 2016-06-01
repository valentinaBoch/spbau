#include <stdio.h>
#include <math.h>

void randWrite (double *, double *, int );
void massNew (double *, double *, int );
void quickSort (double *, int);
int main ()
{
	int size = 5;
	double mas1 [size], mas2 [size]; 
	int i;
	randWrite(mas1, mas2, size);
	for (int i = 0; i < size; i++) 
		printf("mas1 [%d] = %.0lf\n", i, mas1 [i]);
	for (int i = 0; i < size; i++)
		printf("mas2 [%d] = %.0lf\n", i, mas2 [i]);


	quickSort (mas1, size);
	quickSort (mas2, size);	
	for (int i = 0; i < size; i++)
		printf("mas1 [%d] = %.0lf\n", i, mas1 [i]);
	massNew (mas1, mas2, size);
}

void randWrite (double *mas1, double *mas2, int size)
{
	for (int i = 0; i < size; i++)
		mas1 [i] = rand()%100;

	for (int i = 0; i < size; i++)
                mas2 [i] = rand()%100;
}

void quickSort (double *mas, int size)
{
	int center = size / 2;
	int i = 0;
	double temp;
	int j = size-1;	
	end = mas[j];	

	printf ("%d\n", center);
	do 
	{
		while (mas[i] < mas[center]) i++; 
		while (mas[j] > mas[center]) j--;

		if (i <= j)
		{
			temp = mas[i];
			mas[i] = mas[j];
			mas[j] = temp;
			i++; j--;
		}
	} while (i <= j);

	if (j > 0) quickSort(mas, j);
	if (size > i) quickSort(mas+i, size - i);

}

void massNew (double *mas1, double *mas2, int size)
{
	int sizeNew = size*2;
	double masNew[size];
	int i = 0;
//	for (i = 0; i < size; i++)
	//int i = 0;
	while (i < sizeNew)
		for (int j = 0; j < size; j++)
		{
			if (mas1 [j] < mas2 [j]) 
			{
				masNew [i] = mas1 [j];
				masNew [i+1] = mas1 [j];
			}
			else masNew [i] = mas2 [j];
			{       
                                masNew [i] = mas1 [j];
                                masNew [i] = mas1 [j];
                        }


			i++;
		}
	for (i = 0; i < size; i++) printf("masNew [%d] = %.0lf\n", i, masNew [i]);

}
