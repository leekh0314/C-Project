#include<stdio.h> 
#include<malloc.h>
 
void input(int *array);
void output(int *array);

void main() 
{  
    
	int *array = NULL; 
  
     array = (int *)malloc(sizeof(int)*10); 
	 
      printf("������������", *array); 
     
     input(array);
	 output(array);

     printf("�������Ϊ:", *array); 
    
 
} 
void input(int *array)
{	
	int i;
	for (i = 0; i < 10; i++) 
         scanf("%d", &array[i]); 
  
}

void output(int *array)
{   
	int i;
	for (i = 9; i >=0; i--) 
         printf("%d,\n", array[i]); 
}