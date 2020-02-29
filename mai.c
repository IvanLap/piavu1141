#include <stdio.h>
#define N 5
#define M 5

int main()
{
    int a[N][M];
    for (int i=0;i<N;i++)
    {
    for (int j=0;j<M;j++)
    {
        a[i][0]=1;
        a[i][4]=1;
        a[0][j]=1;
        a[4][j]=1;
        a[1][1]=0;
        a[1][2]=rand() %10;
        a[1][3]=0;
        a[2][1]=rand() %10;
        a[2][2]=0;
        a[2][3]=rand() %10;
        a[3][1]=0;
        a[3][2]=rand() %10;
        a[3][3]=0;
        printf ("%d",a[i][j]);
    }
    printf("\n");
    }
    getchar();
    return 0;
}

/*
#include <stdio.h>
#define N 5
#define M 5

int main()
{
	int a[N][M];
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<M; j++)
		{
			a[i][j] = 1;
		}
	}
	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < M - 1; j++)
		{
			a[i][j] = rand() % 2 ? 0 : rand() % 2;
		}
	}
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]); //printf("[%d][%d]=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
