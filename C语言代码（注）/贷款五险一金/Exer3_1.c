/***************************************
// 个税计算器
****************************************/
#include <stdio.h>

#include"color.h"

int main(int argc, char *argv[])
{
	float income, insurance, tax, after_tax;

	printf("请输入月收入: ");
	scanf("%f", &income);

	printf("请输入五险一金: ");
	scanf("%f", &insurance);

	after_tax = income - insurance - 3500;
	
	if(after_tax < 0)
	{
		tax = 0;
	}
	else if(after_tax <= 1500)
	{
		tax = after_tax * 0.03f;
	}
	else if(after_tax <= 4500)
	{
		tax = after_tax * 0.1f - 105;		
	}
	else if(after_tax <= 9000)
	{
		tax = after_tax * 0.2f - 555;
	}
	else if(after_tax <= 35000)
	{
		tax = after_tax * 0.25f - 1005;
	}
	else if(after_tax <= 55000)
	{
		tax = after_tax * 0.30f - 2755;
	}
	else if(after_tax <= 80000)
	{
		tax = after_tax * 0.35f - 5505;
	}
	else
	{
		tax = after_tax * 0.45f - 13505;
	}

	income = income - insurance - tax;

	printf("你本月应交税 %.2f 元\n", tax);
	printf("税后实际收入为 %.2f 元\n", income);

	return 0;
}