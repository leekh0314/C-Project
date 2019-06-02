#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int x,y;
	float a,z;
	
	printf("请输入您的贷款总额（万元）: ");
	scanf("%d", &x);

	printf("请输入您的贷款月数: ");
	scanf("%d", &y);
	x *= 10000;
	if (y<=6)
	{
		/*本金*月利率*(1+月利率）^贷款期数/[(1+月利率）^贷款期数-1]*/
		a=0.056/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("月还款本息%.2f元",z);
	}
	else if( y<=12)
	{	
		a=0.06/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("月还款本息%.2f元",z);
	}

	else if( y<=36)
	{	
		a=0.0615/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("月还款本息%.2f元",z);
	}
	else if( y<=60)
	{	
		a=0.064/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("月还款本息%.2f元",z);
	}
	else 
	{	
		a=0.064/12;
		z=x * a * pow(1+a,y)/(pow(1+a,y)-1);

		printf("月还款本息%.2f元",z);
	}
		return 0;

	
}
