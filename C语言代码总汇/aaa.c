#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define N 1024

int main(int argc, char *argv[])
{	
	int i,j;
	int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12};
	int*p = NULL;
	int *pt[3] = {NULL};

	for(i = 0; i < 3; i++)
	{
		pt[i] = a[i]; //Ê²Ã´ÒâË¼
	}

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%-4d", a[i][j]);
		}

		printf("\n");
	}

	//printf("pt[0]=%p pt[1]=%p pt[2]=%p\n", pt[0], pt[1], pt[2]);

	return 0;
}

void output(int a[][4], int n)
{
}
