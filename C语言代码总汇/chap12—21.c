/*#include<stdio.h>
 void main()
{ int i,x[10];
 int *p;
 p=x;
 printf("����10����:");
 for (i=0;i<10;i++)
	 scanf("%d",&*(p+i));
printf("�����10����Ϊ:");
 for(i=9;i>=0;i--)
	 printf("%d ",*(p+i)); 
}*/
// ��ʽ��: DynamicArray.c 
// ��ʽ����: ��̬�����ʵ��
  
// ��������: ��̬����Ĵ�����ʹ��
 
  
#include<stdio.h> 
#include<malloc.h> 
//#include<stdlib.h>
 
  
void main() 
{  
     
	int *array = NULL, num, i; 
	

     printf("please input the number of element: "); 
     scanf("%d", &num); 
  
    // ���붯̬����ʹ�õ��ڴ��
  
     array = (int *)malloc(sizeof(int)*num); 
	 



     if (array == 0)             // �ڴ�����ʧ��,��ʾ�˳�
 
     {  
         printf("out of memory,press any key to quit...\n"); 
         
	exit(0);             // ��ֹ��������,���ز���ϵͳ
 
     } 
  
     
// ��ʾ����num������
  
      printf("please input %d elements: ", num); 
      for (i = 0; i < num; i++) 
         scanf("%d", &*(array+i)); //*(array+i)=array[i]
  
     
// ����������num������
  
     printf("%d elements are: \n", num); 
     for (i = num-1; i >=0; i--) 
         printf("%d\n", *(array+i)); //*(array+i)=array[i]
  
     //printf("\b \n");    
// ɾ�����һ�����ֺ�ķָ�������
 
    //free(array);        
// �ͷ���malloc����������ڴ��
 
}
  
  

