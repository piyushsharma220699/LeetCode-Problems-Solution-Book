#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int MatrixChainOrder(int p[], int n)
{

	
	int m[n][n];
	int s[n][n];

	int i, j, k, L, q;

	
	for (i = 1; i < n; i++)
	{
		m[i][i] = 0;
		s[i][i] = 0;
	}

	for (L = 2; L < n; L++)
	{
		for (i = 1; i < n - L + 1; i++)
		{
			j = i + L - 1;
			m[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++)
			{
				
				q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (q < m[i][j])
				{
					m[i][j] = q;
					s[i][j] = k;
				}
			}
			//cout<<"m value:"<<m[i][j]<<" ";
			//cout<<"   s value: "<<s[i][j]<<"   ";
		}
	}
	printf("\nFinal value \n");
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf("- ");
		}
		for (int j = i; j < n; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf("- ");
		}
		for (int j = i; j < n; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//printf("\nMinimum number of multiplications is  : %d", m[1][n - 1]);
	return m[1][n - 1];
}


int main()
{
    int arr[] = { 1, 2, 3, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Minimum number of multiplications is %d ",
           MatrixChainOrder(arr, size));
 
    getchar();
    return 0;
}
