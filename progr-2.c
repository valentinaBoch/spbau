#include <stdio.h>
#include <math.h>

void randWrite (double *, double *, int );
void massNew (double *, double *, int size1, int size2);

int main ()
{
	int size = 10;
	double mas1 [size], mas2 [size]; 
	int i;
	randWrite(mas1, mas2, size);
	for (int i = 0; i < size; i++) 
	{
		printf("mas1 [%d] = %.0lf\n", i, mas1 [i]);
		printf("mas2 [%d] = %.0lf\n", i, mas2 [i]);
	}
	massNew (mas1, mas2, size, size);
}

void randWrite (double *mas1, double *mas2, int size)
{
	for (int i = 0; i < size; i++)
		mas1 [i] = rand()%100;

	for (int i = 0; i < size; i++)
                mas2 [i] = rand()%100;
}

void massNew (double *mas1, double *mas2, int size1, int size2)
{
	int size = size1 + size2;
	double masNew[size];
	for (int i = 0; i < size; i++)
	//int i = 0;
	while (i < size)
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
