#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int x,y;
	float a,z;
	
	printf("���������Ĵ����ܶ��Ԫ��: ");
	scanf("%d", &x);

	printf("���������Ĵ�������: ");
	scanf("%d", &y);
	x *= 10000;
	if (y<=6)
	{
		/*����*������*(1+�����ʣ�^��������/[(1+�����ʣ�^��������-1]*/
		a=0.056/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("�»��Ϣ%.2fԪ",z);
	}
	else if( y<=12)
	{	
		a=0.06/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("�»��Ϣ%.2fԪ",z);
	}

	else if( y<=36)
	{	
		a=0.0615/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("�»��Ϣ%.2fԪ",z);
	}
	else if( y<=60)
	{	
		a=0.064/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("�»��Ϣ%.2fԪ",z);
	}
	else 
	{	
		a=0.064/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("�»��Ϣ%.2fԪ",z);
	}
		return 0;

	
}
