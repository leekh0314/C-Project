
#include<stdio.h>
//#include<string.h>
#include<malloc.h>


char  delete_latter(char *str1, char *str2);
char get_number(char *str1,char *str2);

int main (int argc,char*argv[])
{
	char *str1=NULL;
	char *str2=NULL;

	str1=(char*)malloc(20*sizeof(char));
	str2=(char*)malloc(20*sizeof(char));

	printf("请输入字符串:\n");
	gets(str1);

	delete_latter(str1,str2);

	printf("输出删除字母后的新字符串：\n");
	puts(str2);

	get_number(str1,str2);

	printf("输出数字的新字符串：\n");
	puts(str2);

	return 0;
}

char delete_latter(char *str1,char *str2)
{

	while (*str1!='\0')
	{
		if(!((*str1>='a'&&*str1<='z')//!（输出非字母）
			||(*str1>='A'&&*str1<='Z')))
		{	

			*str2=*str1;
			 str2++;
		}

		    str1++;
	}
	*str2='\0';
	return 0;
}

char get_number(char *str1,char *str2)
{
	while(*str1!='\0')
	{
		if(*str1>='0'&&*str1<='9')//输出数字
		{
			*str2=*str1;//str2[j]=str1[i]    或者 *str2相当于str2[str2]和str2[j]
			str2++;		//j++
		}                                                                                                                                                                                                                                                                                                                                                                                                                     
		str1++;			//i++
	}
	*str2='\0';
	return 0;
}

