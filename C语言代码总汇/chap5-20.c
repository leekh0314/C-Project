#include <stdio.h>

int getlength(char *str);
int findsite(char *str, char ch);

int main()
{
	char str[100];
	char *p = str;//*p=str
	char ch;

	printf("请输入字符串: ");
	gets(str);	

	printf("字符串长度为:%d\n", getlength(str));

	printf("请输入查找的字符: ");
	scanf("%c", &ch);

	printf("字符%c在字符串%s的位置为%d\n", ch, str, findsite(str, ch));
}

int getlength(char *str)
{
	int i = 0;

	while(*(str+i) != '\0')
		i++;

	return i;
}

int findsite(char *str, char ch)//str[]变*str
{
	int i = 0;

	while(*(str+i) != ch)//str[i]变*(str+i)
	{
		if(*(str+i) == '\0')
			return 0;
		i++;
	}

	return i+1;

}