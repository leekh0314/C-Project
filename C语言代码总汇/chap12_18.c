#include <stdio.h>
#include <malloc.h>

char *int_to_string(int x);
int string_to_int(char *str);

int main(int argc, char *argv[])
{
	int n;
	char str[20], *s;
	s = str;

	gets(s);

	n = string_to_int(s);
	printf("n = %d\n", n);

	/*printf("Please input a integer: ");
	scanf("%d", &n);
	s = int_to_string(n);

	printf("Converted string is ");
	puts(s);*/
	
	return 0;
}

char *int_to_string(int x)
{
	int r;
	char str[20], *s = str;
	static char newstr[20], *p = newstr;

	if(x == 0)
	{
		strcpy(p, "0");
		return newstr;
	}
	else if(x < 0)
	{
		*p = '-';
		p++;
		x = -x;
	}

	while(x != 0)
	{
		r = x % 10;
		x /= 10;
		*s = r + '0';
		s++;
	}

	s--;
	do
	{
		*p = *s;
		p++;
	}while(s-- != str);
	*p = 0;
	return newstr;
}

int string_to_int(char *str)
{
	int n = 0;
	short flag = 1;

	if(*str == '-')
	{
		flag = -1;
		str++;
	}
	
	while(*str != 0)
	{
		n = (n + (*str - '0')) * 10;
		str++;
	}

	n /= 10;
	n = flag * n;

	return n;
}