#include <stdio.h>

int getlength(char str[]);
int findsite(char str[], char ch);

int main()
{
	char str[100];
	char ch;

	printf("�������ַ���: ");
	gets(str);	

	printf("�ַ�������Ϊ%d\n", getlength(str));

	printf("��������ҵ��ַ�: ");
	scanf("%c", &ch);

	printf("�ַ�%c���ַ���%s��λ��Ϊ%d\n", ch, str, findsite(str, ch));
}

int getlength(char str[])
{
	int i = 0;

	while(str[i] != '\0')

	{	i++;}

	return i;
}

int findsite(char str[], char ch)
{
	int i = 0;

	while(str[i] != ch)
	{
		if(str[i] == '\0')
			return 0;//����ѭ�� return 0��break��continue
		i++;
	}

	return i+1;

}
