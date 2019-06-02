#include <stdio.h>
//#define N 100
/*int getlength(char str[100])
{
	int i = 0;

	while(str[i] != '\0')
		i++;

	return i;
}*/
int getlength(char *str)
{
	int i = 0;

	while(*(str+i) != '\0')

		i++;

	return i;
}

void show (char str[100])  
{ 
	char *p;
	p=str; 
	for (p=str;*p!='\0';p++) 
		if (*p>='a' && *p<='z') 
			*p=*p-32;
		
		else if
			(*p>='A' && *p<='Z') 
			*p=*p+32; 
} 

int main(int argc,char *argv[] ) 
{ 
	char str[100];
	char x[50];
	
	gets(x); 

	printf("×Ö·û´®³¤¶ÈÎª%d\n", getlength(x));

	show(x); 

	printf("%s\n",x); 

	return 0;

}




