#include<stdio.h>
#include<math.h>
void deng_xi(int a,int b,double r);
void deng_jin(int a,int b,double r);

int main (int argc, char *argv[])  
{
	int a;//������
	int b;//��������
	double r;//������
	int e;//ѡ��

	printf("��ѡ�񻹿ʽ: \n");
	printf(" 1: �ȶϢ  2:�ȶ��\n");
	printf("���ѡ���ǣ�");
	scanf("%d",&e);
	printf("��������");
	scanf("%d",&a);
	printf("��������������");
	scanf("%d",&b);

	if(b<=6)
	{
		r = 5.6/100/12;
	}
	else if(b<=12)
	{
		r = 6.00/100/12;
	}
	else if(b<=36)
	{
		r = 6.15/100/12;
	}
	else if(b<=60)
	{
		r = 6.40/100/12;
	}
	else
	{
		r = 6.55/100/12;
	}
switch(e)
{
	case 1: 
			deng_xi(a,b,r);	
			break;
	case 2:
			deng_jin(a,b,r);
			break;

default :
		printf("�������!!!!!!!!!!!!!!\n");
		break;
}

	return 0;
}





void deng_xi(int a,int b,double r)
{	
	double x;
	x= a*r*pow((1+r),b)/(pow((1+r),b)-1);
		printf("%lf\n",x);
}
void deng_jin(int a,int b,double r)
{	
	double y;
	int i;
	for(i=1;i<=b;i++)
	{
		y=(float)(a)/b+(a-(float)(i-1)*a/b)*r;
		printf("%lf\n",y);
	}
}

