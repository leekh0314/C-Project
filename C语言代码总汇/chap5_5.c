#include <stdio.h>
#include <string.h>//���ַ����е�strlen��strcmp��strcpy����Ҫͷ�ļ�
#define N 2

void input(char no[ ][11],char name[][21],int age[],
		float c_score[ ], float math[], float english[], int n);
void output(char no[ ][11],char name[][21],int age[],
		float c_score[ ], float math[], float english[], int n);
int find(char name[][21], int n, char fname[]);
void total(char no[ ][11],char name[][21],int age[],
		float c_score[ ],  int n);
int main()
{
	char no[N][11];
	char name[N][21];
	int age[N];
	float c_score[N];
	float math[N];
	float english[N];
	char fname[21];
	int result;

	input( no ,name, age,c_score, math, english, N);
	output( no ,name, age,c_score, math, english, N);

	fflush(stdin);
	gets(fname);

	result = find(name, N, fname);
	if(result < 0)
		printf("���޴���\n");
	else
	output( no+result,name + result, 
			age  + result,c_score + result, 
			math + result, english + result, 1);
	
	 total( no, name, age,
		c_score,  N);


	return 0;
}

void input(char no[ ][11],char name[][21],int age[],
		float c_score[ ], float math[], float english[], int n)
{

	int i;

	for(i = 0; i < n; i++)
	{
		printf("������ѧ��: ");
		fflush(stdin);
		gets(no[i]);
		printf("����������: ");
		fflush(stdin);
		scanf("%s", name[i]);

		printf("����������: ");	
		scanf("%d", &age[i]);
		printf("������C���Գɼ�: ");	
		scanf("%f", &c_score[i]);
		printf("������ߵ���ѧ�ɼ�: ");	
		scanf("%f", &math[i]);
		printf("������Ӣ��ɼ�: ");	
		scanf("%f", &english[i]);
	}

}
void output(char no[ ][11],char name[][21],int age[],
		float c_score[ ], float math[], float english[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%-14s%-22s%-4d%-7.1f%-7.1f%-7.1f\n", no[i], name[i], age[i],
				c_score[i], math[i], english[i]);
	}

}

//����ֵ�Ǹ�ѧ����λ��
int find(char name[][21], int n, char fname[])
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(0 == strcmp(name[i],fname))
			return i;
	}

	return -1;
}

void total(char no[ ][11],char name[][21],int age[],
		float c_score[ ],  int n)
{
	int i;
	printf("\n��(�ɼ�>=90)��ѧ��Ϊ��\n");
	for (i = 0; i<N; i++)
	{
		if (c_score[i] >= 90)
		{
			printf("%-10d",no[i]);
			printf("5-16d",name[i]);
			printf("%-4d",age[i]);
			printf("%-6.0f",c_score[i]);
			printf("\n");

		}
	}
	printf("\n��(80<=�ɼ�<90)��ѧ��: \n");
	for (i=0;i<N;i++)
	{
		if(c_score[i]>=80 && c_score[i] < 90)
		{
			printf("%-10ld",no[i]);
			printf("%-16s", name[i]);
			printf("%-4d",age[i]);
			printf("%-6.0f", c_score[i]);
			printf("\n");
		}
	}

}
