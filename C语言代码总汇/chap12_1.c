#include <stdio.h>
void delete_letter(char str[], char newstr[],char ch);
int main(int argc, char *argv[])
{
	char str[100];
	char ch;
	char newstr[100];

	printf("�������ַ���: ");
	fflush(stdin);
	scanf("%s", str);
	printf("������Ҫɾ�����ַ�: ");
	fflush(stdin);
	scanf("%c", &ch);

	delete_letter(str,newstr,ch);	//���ú���

	puts(newstr);//���ɾ���ַ�����´�

	return 0;
}

void delete_letter(char str[], char newstr[],char ch)
{
	int i=0,j=0;
	
	while (str[i]!='\0')
	{
		if(str[i]==ch)
		{

		i++;
		continue;
	}
	newstr[j++]=str[i++];
		newstr[j]='\0';

	}


	
}