#include<stdio.h>
#define N 2
struct student
{
	char no[11];
	char name[21];
	char gender;
	int age;
	float chinese;
	float math;
	float english;
};
void input(struct student stu[],int n);
void search(struct student stu[],int n ,char no);
void count();

int main(int argc, char *argv[])
{
	struct student stu[N];
	struct student stu[],int n ,char no;

	input(stu,N);

	search(stu,N,no);

	count();

	return 0;

}
void input(struct student stu[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		fflush(stdin);
		scanf("%s%s",stu[i].no,stu[i].name);
		fflush(stdin);
		scanf("%c",&stu[i].gender);
		scanf("%d", &stu[i].age);
		scanf("%f",&stu[i].chinese);
		scanf("%f",&stu[i].math);
		scanf("%f",&stu[i].english);
}
}

 void search(struct student stu[],int n, char no)
{
	int i;
	for(i = 0; i < n; i++)
	{	
		if(strcmp(stu[i].no,no) == 0)
			return stu[i];
	}

}
void count()
{

}

