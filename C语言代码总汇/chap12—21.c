/*#include<stdio.h>
 void main()
{ int i,x[10];
 int *p;
 p=x;
 printf("输入10个数:");
 for (i=0;i<10;i++)
	 scanf("%d",&*(p+i));
printf("输出的10个数为:");
 for(i=9;i>=0;i--)
	 printf("%d ",*(p+i)); 
}*/
// 程式名: DynamicArray.c 
// 程式功能: 动态数组的实现
  
// 功能描述: 动态数组的创建与使用
 
  
#include<stdio.h> 
#include<malloc.h> 
//#include<stdlib.h>
 
  
void main() 
{  
     
	int *array = NULL, num, i; 
	

     printf("please input the number of element: "); 
     scanf("%d", &num); 
  
    // 申请动态数组使用的内存块
  
     array = (int *)malloc(sizeof(int)*num); 
	 



     if (array == 0)             // 内存申请失败,提示退出
 
     {  
         printf("out of memory,press any key to quit...\n"); 
         
	exit(0);             // 终止程序运行,返回操作系统
 
     } 
  
     
// 提示输入num个数据
  
      printf("please input %d elements: ", num); 
      for (i = 0; i < num; i++) 
         scanf("%d", &*(array+i)); //*(array+i)=array[i]
  
     
// 输出刚输入的num个数据
  
     printf("%d elements are: \n", num); 
     for (i = num-1; i >=0; i--) 
         printf("%d\n", *(array+i)); //*(array+i)=array[i]
  
     //printf("\b \n");    
// 删除最后一个数字后的分隔符逗号
 
    //free(array);        
// 释放由malloc函数申请的内存块
 
}
  
  

