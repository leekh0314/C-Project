#include<stdio.h>
#include <stdlib.h>
int system(const char *string);
int main(int argc, char *argv[])
{
	int n;
	printf("===========大学信息管理系统============\n");
	printf("---------------------------------------\n");
	printf("\t1.办公室管理\t6.图书管理\n");
	printf("\t2.教务管理\t7.设备管理\n");
	printf("\t3.科研管理\t8.后勤管理\n");
	printf("\t4.人事管理\t9.教师管理\n");
	printf("\t5.财务管理\t10.学生管理\n");
	printf("       \t0.退出系统\n");
	printf("----------------------------\n");
	printf("请您在上述功能中选择(0-10): \n");
		lop:scanf("%d",&n);
	system("cls");

if(n>=0&&n<=10)
	{
	
	switch(n)
	{
	case 1: printf("办公室管理\n");  
		break;
	case 2: printf("教务管理\n");
		break;
	case 3: printf("科研管理\n");
		break;
	case 4: printf("人事管理\n");
		//exit(0);
		break;
	case 5: printf("财务管理\n");
		break;
	case 6: printf("图书管理\n");
		break;
	case 7: printf("设备管理\n");
		break;
	case 8: printf("后勤管理\n");
		break;
	case 9: printf("教师管理\n");
		break;
	case 0: printf("退出系统\n"	);
	exit(0);//break;
	default: ("输入错误，请重新输入！");
		break;
	}
	
		
		
		
	
	}
	
	else
			printf("输入错误，请重新输入! \n");goto lop;
//;
	
	return 0;
	
}