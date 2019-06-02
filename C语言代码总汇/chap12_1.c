#include <stdio.h>
void delete_letter(char str[], char newstr[],char ch);
int main(int argc, char *argv[])
{
	char str[100];
	char ch;
	char newstr[100];

	printf("请输入字符串: ");
	fflush(stdin);
	scanf("%s", str);
	printf("请输入要删除的字符: ");
	fflush(stdin);
	scanf("%c", &ch);

	delete_letter(str,newstr,ch);	//调用函数

	puts(newstr);//输出删除字符后的新串

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