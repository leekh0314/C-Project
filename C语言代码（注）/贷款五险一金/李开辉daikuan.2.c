#include<stdio.h>
#include<math.h>
void deng_xi(int a,int b,double r);
void deng_jin(int a,int b,double r);

int main (int argc, char *argv[])  
{
	int a;//贷款金额
	int b;//贷款月数
	double r;//月利率
	int e;//选择

	printf("请选择还款方式: \n");
	printf(" 1: 等额本息  2:等额本金\n");
	printf("你的选择是：");
	scanf("%d",&e);
	printf("输入贷款金额：");
	scanf("%d",&a);
	printf("输入贷款的月数：");
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
		printf("输入错误!!!!!!!!!!!!!!\n");
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

