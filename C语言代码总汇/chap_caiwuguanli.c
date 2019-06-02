#include <stdio.h> 
#include <stdlib.h> 
#include <malloc.h>
#define N 2
void input(); 
void Output(); 
void Allput(); 
void Dateput(); 
void Delete(); 
void Delpart(); 
void Delall(); 
void Monput(); 
void Yearput(); 
 struct money 
{ 
 float shou;                   /*收入*/ 
 float zhi;                    /*支出*/ 
 float yu;                     /*余额*/ 
 char a[50];                  /*收入来源*/ 
 char b[50];                   /*支出去向*/ 
 int year;                     /*年*/ 
 int mon;                      /*月*/ 
 int day;                      /*日*/ 
} RMB;                            /*定义结构体变量*/ 
typedef struct Mon
{ 
 struct money data;           /*存放一天的收支信息*/ 
 struct Mon *next; 
} List;                          /*自定义链表节点类型*/ 
/********************************************************************************************************************************/ 
void main() 
{ 
 
 int i; 
 printf("**********************^_^欢迎进入财务管理程序^_^*************************\n"); 
 printf(" 1 输入收支信息2 查询收支信息3 删除收支信息0 退出\n");  
 printf(" 请选择要执行的功能:"); 
 scanf("%d",&i); 
 while(i!=0) 
 { 
  if(i==1) 
  { 
   input();                        /*调用输入收支信息函数*/ 
   printf(" 1 输入收支信息2 查询收支信息3 删除收支信息0 退出\n"); 
   printf(" 请选择要执行的功能:"); 
   scanf("%d",&i); 
  }
else if(i==2) 
  { 
   Output();                        /*调用查询收支信息函数*/ 
   printf(" 1 输入收支信息2 查询收支信息3 删除收支信息0 退出\n"); 
   printf(" 请选择要执行的功能:"); 
   scanf("%d",&i); 
  } 
 
  else if(i==3)                        /*调用删除收支信息函数*/ 
  { 
   Delete(); 
   printf(" 1 输入收支信息2 查询收支信息3 删除收支信息0 退出\n"); 
   printf(" 请选择要执行的功能:"); 
   scanf("%d",&i); 
  } 
  else                              /*用户输入错误时提示*/ 
  { 
   printf("\n 只能输入1或2或3或0!\n"); 
   printf(" 请重新选择要执行的功能:"); 
  scanf("%d",&i); 
  } 
 } 
 printf("========================^_^ 谢谢您的使用!^_^============================\n"); 
}
void input()                     /*输入收支信息函数*/ 
{
	int i;
	
	FILE *ap;
	for(i =0; i < N; i++)
	{ 
	printf("\t输入收入:");            /*输入收入*/ 
	scanf("%g",&RMB.shou);           
	printf("\t收入来源:");            /*输入收入来源*/ 
	scanf("%s",RMB.a); 
	printf("\t输入支出:"); 
	scanf("%g",&RMB.zhi);             /*输入支出*/ 
	printf("\t支出去向:"); 
	scanf("%s",RMB.b);              /*输入支出去向*/ 
	RMB.yu=RMB.shou-RMB.zhi; 
	printf("\t输入年 月 日:"); 
	scanf("%d%d%d",&RMB.year,&RMB.mon,&RMB.day);         /*输入年月日*/ 
	
 if((ap=fopen("money.txt","ab"))==NULL)                 /*打开文件*/ 
  printf("不能建立文件money.txt\n"); 
 else 
  fwrite(&RMB,sizeof(struct money),1,ap);            /*将收支信息记录在money.txt文件*/ 
 fclose(ap);/*关闭文件*/ 
	}	
 printf("**********************************************************************\n"); 
} 
/******************************************************************************************************/
 
void Output()                      /*查询收支信息函数*/ 
{ 
 int i; 
 while(1) 
 { 
  printf("\n 1 按天查询部分收支信息2 按月查询部分收支信息3 按年查询部分收支信息4 查询全部收支信息0 退出查询\n"); 
  printf(" 请选择查询方式:");        /*输入选择*/ 
  scanf("%d",&i); 
  if(i==1) 
  { 
   Dateput();               /*调用按日期查询收支信息函数*/ 
  } 
  else if(i==2) 
   Monput(); 
  else if(i==3) 
   Yearput(); 
  else if(i==4) 
  { 
   Allput();                 /*调用查询全部收支信息函数*/ 
  } 
  else if(i==0)  
  { 
	 printf("*****************************************************************\n"); 
	break;                  /*退出查询收支信息函数*/ 
  } 
  else 
  { 
   printf(" 输入错误!\n"); 
  
 printf("******************************************************************\n"); 
   break;           /*用户输入错误时退出*/   } 
 } 
} 
/*********************************************************************************************************************/ 
void Allput()                      /*查询全部收支信息函数*/                 
{ 
 FILE *ap; 
 float s=0,zs=0,zz=0; 
 if((ap=fopen("money.txt","r"))==NULL) 
  printf("不能读取money.txt文件\n"); 
 while(1) 
 { 
  if(fread(&RMB,sizeof(struct money),1,ap)>0)      /*在money.txt文件中读取信息*/ 
  { 
      printf("\t日期:%d %d %d\n",RMB.year,RMB.mon,RMB.day);      /*输出年、月、日*/ 
      printf("\t收入:%g\n\t收入来源:%s\n",RMB.shou,RMB.a);       /*输出查询的收入、收入来源*/ 
   printf("\t支出:%g\n\t支出去向:%s\n",RMB.zhi,RMB.b);        /*输出查询的支出、支出去向*/ 
   printf("\t余额:%g\n\n",RMB.yu);            /*输出余额*/ 
      zs+=RMB.shou;            /*统计总收入*/ 
      zz+=RMB.zhi;             /*统计总支出*/ 
      s+=RMB.yu;               /*统计总余额*/ 
  } 
  else break; 
 } 
 printf("***********************************************************************\n"); 
 printf("\t总收入:%g\n\t总支出:%g\n\t总余额:%g\n",zs,zz,s);   /*输出总收入、总支出、总余额*/
 printf("***********************************************************************\n"); 
 fclose(ap);                         /*关闭文件*/ 
} 
/*********************************************************************************************************************/ 
void Dateput()                   /*按日期查询收支信息函数*/ 
{ 
 FILE *ap; 
 int y,m,d,n=0; 
 float zs=0,zz=0,s=0; 
 printf("\t输入要查询的年 月 日:");           /*输入要查询的年、月、日*/ 
 scanf("%d%d%d",&y,&m,&d); 
 if((ap=fopen("money.txt","r"))==NULL) 
  printf("不能读取money.txt文件\n"); 
 while(1) 
 { 
  if(fread(&RMB,sizeof(struct money),1,ap)>0)        /*从文件读取信息*/ 
  { 
      
if(y==RMB.year&&m==RMB.mon&&d==RMB.day)         /*查找用户查询的收支信息并将其输出*/ 
   { 
       printf("\t收入:%g\n\t收入来源:%s\n",RMB.shou,RMB.a); 
    printf("\t支出:%g\n\t支出去向:%s\n",RMB.zhi,RMB.b); 
    printf("\t余额:%g\n\n",RMB.yu); 
    zs+=RMB.shou;            /*统计该天的总收入、总支出、总余额*/ 
    zz+=RMB.zhi; 
    s+=RMB.yu; 
    n++;                  /*统计该天的收支次数*/ 
   } 
  } 
  else  break; 
 }  fclose(ap);         /*关闭文件*/ 
 if(n==0) printf("\t无该日期的收支信息!\n"); 
 if(n>=2)              /*若该天收支次数大于1则输出该天的总收入、总支出、总余额*/ 
 { 
  printf("\n\t该天有%d次收支信息\n",n); 
  printf("\t该天总收入:%g\n",zs); 
  printf("\t该天总支出:%g\n",zz); 
  printf("\t该天总余额:%g\n",s); 
 } 
 printf("***********************************************************************\n"); 
} 
 
/******************************************************************************************************************/ 
void Delete()                   /*删除收支信息函数*/ 
{ 
    int i; 
   while(1)   
 { 
  printf("\n 1 按日期部分删除\n"); 
     printf(" 2 全部删除\n"); 
  printf(" 0 退出删除\n"); 
     printf(" 请选择删除方式:"); 
	 scanf("%d",&i);           /*收受用户输入的删除方式*/ 
  if(i==1)            /*按日期删除部分收支信息*/     
  { 
   Delpart();           /*调用按日期删除部分收支信息函数*/ 
  } 
  else if(i==2)            /*删除全部信息*/ 
  { 
      Delall();            /*调用删除全部收支信息函数*/ 
  } 
  else if(i==0)            /*退出删除*/ 
  { 
	  printf("************************************************************************\n"); 
   break; 
  } 
  else        /*用户输入的信息错误*/ 
  { 
   printf(" 输入错误!\n"); 
  
 printf("*********************************************************************\n"); 
   break; 
  } 
 }  
} 
/*************************************************************************************************************************/ 
void Delpart()            /*按日期删除部分收支信息函数*/ 
{ 
 FILE *ap; 
 List *head,*r,*s,*pb; 
 int n=0,y,m,d,a=0; 
 head=(List *)malloc(sizeof(List));             /*创建头节点*/ 
 head->next=NULL; 
 r=head; 
 if((ap=fopen("money.txt","r"))==NULL) 
  printf("不能打开money.txt文件!\n"); 
    printf(" 输入要删除的年 月 日:"); 
 scanf("%d%d%d",&y,&m,&d); 
 while(fread(&RMB,sizeof(struct 
money),1,ap)>0)     /*在文件中读取信息查找要删除的信息*/ 
 { 
 
 if(y==RMB.year&&m==RMB.mon&&d==RMB.day)          
      n++; 
  else 
  { 
   s=(List *)malloc(sizeof(List));          /*尾插入法创建链表并将不需要删除的信息存在数据域*/  
   s->data=RMB; 
   r->next=s; 
   r=s; 
  } 
 } 
 r->next=NULL;               /*为节点的next置为NULL*/ 
 fclose(ap);  /*关闭文件*/ 
 printf(" 确定要删除%d年%d月%d日的收支信息吗?\n 1 是\n 2 否\n",y,m,d); 
 printf("请选择:"); 
 scanf("%d",&a); 
 if(a==1) 
 { 
     if(n)             /*要删除的信息存在*/ 
  { 
      ap=fopen("money.txt","wb");        /*重新打开文件并删除原全部记录*/ 
      pb=head->next; 
      while(pb!=NULL) 
   { 
       fwrite(&pb->data,sizeof(struct money),1,ap);  /*将链表数据域中的数据读入文件得到删除后的新文件*/ 
       pb=pb->next; 
   } 
      fclose(ap);       /*删除成功关闭文件*/ 
      printf(" \n 成功删除%d年%d月%d日的收支信息!\n",y,m,d); 
      
 printf("****************************************************************\n"); 
  } 
     else           /*要删除的信息部存在*/ 
  { 
      printf(" \n 无%d年%d月%d日的收支信息!\n",y,m,d); 
     
 printf("****************************************************************\n"); 
  } 
 } 
} 
/******************************************************************************************************************/ 
void Delall()            /*删除全部收支信息函
数*/ 
{ 
 FILE *ap; 
 int a=0; 
 printf(" 确定要删除全部收支信息吗?\n 1 是\n 2 否\n"); 
 printf(" 请选择:"); 
 scanf("%d",&a); 
 if(a==1) 
 { 
     ap=fopen("money.txt","wb"); 
     fclose(ap); 
     printf(" \n 成功删除全部收支信息!\n"); 
 } 
 printf("*********************************************************************\n"); 
} 
/********************************************************************************************************/ 
void Monput()                 /*按月查询收支信息函数*/ 
{ 
 FILE *ap; 
 int y,m; 
 float zs=0,zz=0,s=0; 
 printf("输入要查询的年月:"); 
 scanf("%d%d",&y,&m); 
 if((ap=fopen("money.txt","r"))==NULL) 
  printf("不能打开money.txt文件!\n"); 
 while(fread(&RMB,sizeof(struct money),1,ap)>0) 
 { 
  if(y==RMB.year&&m==RMB.mon)             /*在文件中查找符合条件的信息并输出*/ 
  { 
   printf("\t%d年%d月%d日\n",RMB.year,RMB.mon,RMB.day); 
   printf("\t收入:%g\n\t收入来源:%s\n",RMB.shou,RMB.a); 
   printf("\t支出:%g\n\t支出去向:%s\n",RMB.zhi,RMB.b); 
   printf("\t余额:%g\n\n",RMB.yu); 
   zs+=RMB.shou;            /*统计查询月份的总收入、总支出、总余额*/ 
   zz+=RMB.zhi; 
      s+=RMB.yu; 
  } 
 } 
 fclose(ap); 
 printf("\t%d年%d月总收入:%g\n",y,m,zs);    /*输出所查询月份的总收入、总支出、总余额*/ 
 printf("\t%d年%d月总支出:%g\n",y,m,zz); 
 printf("\t%d年%d月总余额:%g\n",y,m,s); 
 printf("******************************************************************************"); 
} 
/***********************************************************************************************************************/ 
void Yearput()                       /*按年查询收支信息函数*/ 
{ 
 FILE *ap; 
 int y; 
 float zs=0,zz=0,s=0; 
 printf("输入要查询的年份:"); 
 scanf("%d",&y); 
 if((ap=fopen("money.txt","r"))==NULL) 
  printf("不能打开money.txt文件!\n"); 
 while(fread(&RMB,sizeof(struct money),1,ap)>0) 
 { 
  if(y==RMB.year)        /*输出符合条件的信息*/ 
  { 
   printf("\t%d年%d月%d日\n",RMB.year,RMB.mon,RMB.day); 
   printf("\t收入:%g\n\t收入来源:%s\n",RMB.shou,RMB.a); 
   printf("\t支出:%g\n\t支出去向:%s\n",RMB.zhi,RMB.b); 
   printf("\t余额:%g\n\n",RMB.yu); 
   zs+=RMB.shou;            /*统计查询年份的总收入、总支出、总余额*/ 
   zz+=RMB.zhi; 
   s+=RMB.yu; 
  } 
 } 
 fclose(ap);  printf("\t%d年总收入:%g\n",y,zs);      /*输出年度总收入、总支出、总余额*/ 
 printf("\t%d年总支出:%g\n",y,zz); 
 printf("\t%d年总余额:%g\n",y,s); 
 printf("******************************************************************************\n"); 
} 
