#include <stdio.h>

#define N 2


struct teacher
{
	char id[11];
	char name[21];
	char gender;
	int age;
	char zc[11];
	char xl[7];
	char phone[12];
	float wage;
};


void show(struct teacher dep[], int n);

int main()
{
	struct teacher sx[N];

	int i;

	for(i = 0; i < N; i++)
	{
		scanf("%s%s" ,sx[i].id, sx[i].name);
		fflush(stdin);//
		scanf("%c" ,&sx[i].gender);
		scanf("%d%s%s%s%f" , &sx[i].age, sx[i].zc,
				sx[i].xl, sx[i].phone,&sx[i].wage);
	}

	show(sx, N);
	return 0;
}

void show(struct teacher dep[], int n)
{
	int i;
	/*
	char id[11];char name[21];char gender;int age;
	char zc[11];char xl[7];	char phone[12];	float wage;
	*/
	for(i = 0; i < n; i++)
		//ÏÔÊ¾
		printf("%s %s %c %d %s %s %s %.2f\n" ,dep[i].id, dep[i].name, dep[i].gender,
				dep[i].age, dep[i].zc,dep[i].xl, dep[i].phone,
				dep[i].wage);
}