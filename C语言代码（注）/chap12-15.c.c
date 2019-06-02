
#include<stdio.h>
//#include<string.h>
#include<malloc.h>

char  delete_latter(char *str1, char *str2);
char get_number(char *str1,char *str2);
int main (int argc,char*argv[])
{
	char *str1;
	char *str2;

	str1=(char*)malloc(20*sizeof(char));
	str2=(char*)malloc(20*sizeof(char));

	printf("ÇëÊäÈë×Ö·û´®:\n");
	gets(str1);

	delete_latter(str1,str2);
	printf("Êä³öÉ¾³ý×ÖÄ¸ºóµÄÐÂ×Ö·û´®£º\n");
	puts(str2);

	get_number(str1,str2);
	printf("Êä³öÊý×ÖµÄÐÂ×Ö·û´®£º\n");
	puts(str2);


	return 0;
}

char delete_latter(char *str1,char *str2)
{

	while (*str1!='\0')
	{
		if(!((*str1>='a'&&*str1<='z')
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
		if(*str1>='0'&&*str1<='9')
		{
			*str2=*str1;
			str2++;
		}                                                                                                                                                                                                                                                                                                                                                                                                                     
		str1++;
	}
	*str2='\0';
	return 0;
}

