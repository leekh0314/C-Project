#include<stdio.h>
#include <stdlib.h>
int system(const char *string);
int main(int argc, char *argv[])
{
	int n;
	printf("===========��ѧ��Ϣ����ϵͳ============\n");
	printf("---------------------------------------\n");
	printf("\t1.�칫�ҹ���\t6.ͼ�����\n");
	printf("\t2.�������\t7.�豸����\n");
	printf("\t3.���й���\t8.���ڹ���\n");
	printf("\t4.���¹���\t9.��ʦ����\n");
	printf("\t5.�������\t10.ѧ������\n");
	printf("       \t0.�˳�ϵͳ\n");
	printf("----------------------------\n");
	printf("����������������ѡ��(0-10): \n");
		lop:scanf("%d",&n);
	system("cls");

if(n>=0&&n<=10)
	{
	
	switch(n)
	{
	case 1: printf("�칫�ҹ���\n");  
		break;
	case 2: printf("�������\n");
		break;
	case 3: printf("���й���\n");
		break;
	case 4: printf("���¹���\n");
		//exit(0);
		break;
	case 5: printf("�������\n");
		break;
	case 6: printf("ͼ�����\n");
		break;
	case 7: printf("�豸����\n");
		break;
	case 8: printf("���ڹ���\n");
		break;
	case 9: printf("��ʦ����\n");
		break;
	case 0: printf("�˳�ϵͳ\n"	);
	exit(0);//break;
	default: ("����������������룡");
		break;
	}
	
		
		
		
	
	}
	
	else
			printf("�����������������! \n");goto lop;
//;
	
	return 0;
	
}