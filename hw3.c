#include <stdio.h>

void factor(int[][7],int[][7], int*, int*);
void print(int[][7], int*, int*);

void main()
{
	int col=8 , row=6;
	int *colptr, *rowptr;
	int a[row][col], b[row][col], i, j, x=2;
	for (i=0; i<row; i++)
		for (j=0; j<col; j++, x+=10)
			a[i][j] = x*x+3*x;
	rowptr = &row;
	colptr = &col;
	printf("array A:\n");
	print(a, colptr, rowptr);
	factor(a, b, colptr, rowptr);
	printf("\narray B:\n");
	print(b, colptr, rowptr);

}

void factor(int a[][7], int b[][7], int *col, int *row)
{
	int sum, check, i, j, k;
	for (i=0; i<*row; i++)
		for (j=0; j<*col; j++)
		{
			sum = 0;
			check = a[i][j];
			for (k=2; k<=check; k++)
				if(check%k == 0)
				{
					sum+=k;
					check/=k;
					k--;
				}
		b[i][j] = sum;
		}
}

void print(int a[][7], int *col, int *row)
{
	int i, j;
	for (i=0; i<*row; i++)
	{
		for (j=0; j<*col; j++)
			printf("%8d", a[i][j]);
		printf("\n");
	}
}
