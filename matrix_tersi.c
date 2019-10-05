#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
#define MAX 10
 
double determinant(double[][MAX], int);
void transpose(double[][MAX], int);
void inverse(double[][MAX], double[][MAX], int);
 
int main()
{
    int num,choice;
    double matrix[MAX][MAX]={0}, det;
    printf("enter size of matrix: ");
    scanf("%d", &num);
    do
    {
        printf("enter 1 for manual input or 0 for random constructed matrix: ");
        scanf("%d", &choice);
    }while (choice!=1 && choice!=0);
    if (1 == choice)
    {
    for (int i=0; i<num; i++)
        for (int j=0; j<num; j++)
        {
            printf("enter A[%d][%d]: ",i,j);
            scanf("%lf", &matrix[i][j]);
        }
    }
    else
    {
        srand(time(NULL));
        for (int i=0; i<num; i++)
            for (int j=0; j<num; j++)
                matrix[i][j] = (double)(1+rand()%25)/(1+rand()%10);
    }
    printf("Matrix A:\n");
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
            printf("%.2lf ", matrix[i][j]);
        printf("\n");
    }
   
    det = determinant(matrix, num);
    printf("\ndet = %.2lf\n\n", det);
    if (0==det)
    {
        printf("matrix is not invertible.\n");
        system("pause");
        return 0;
    }
    double inv[MAX][MAX] = {0};
    inverse(matrix, inv, num);
    printf("Inverse of Matrix A:\n");
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
            printf("%.5lf ", inv[i][j]);
        printf("\n");
    }
       
   
    system("pause");
    return 0;  
}
 
double determinant(double mat[][MAX], int size)
{
    double det=0;
    if (1 == size)
        return mat[0][0];      
    else
    {
        int r,s;
        double a[MAX][MAX];
        for (int k=0; k<size; k++)
        {
            r=0;
            s=0;
            for (int i=0; i<size; i++)
            {
                for (int j=0; j<size; j++)
                {
                    a[i][j] = 0;
                    if(i!=0 && j!=k)
                    {
                        a[r][s] = mat[i][j];
                        if (r<size-2)
                        ++r;
                        else
                        {
                            r=0;
                            ++s;
                        }
                    }
                }
                det += pow(-1, k)*mat[0][k]*determinant(a, size-1);
            }
        }
    }
    return det;
}
 
void transpose(double a[][MAX], int size)
{
    for (int i=0; i<size; i++)
        for(int j=0; j<i; j++)
        {
            double temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
}
 
void inverse(double mat[][MAX], double inv[][MAX], int size)
{
    double d = 1.0 / determinant(mat, size);
    if (size == 1)
    {
        inv[0][0] = d;
        return;
    }
    double a[MAX][MAX];
    int r,s;
    for (int n=0; n<size; n++)
    {
        for (int m=0; m<size; m++)
        {
            r=0;
            s=0;
            for (int i=0; i<size; i++)
            {
                for (int j=0; j<size; j++)
                {
                    a[i][j] = 0;
                    if(i!=n && j!=m)
                    {
                        a[r][s] = mat[i][j];
                        if (r<size-2)
                            ++r;
                        else
                        {
                            r=0;
                            ++s;
                        }
                    }
                }
            }
            inv[n][m] = d*pow(-1, n+m)*determinant(a, size-1);
        }
    }
    transpose(inv, size);
}
