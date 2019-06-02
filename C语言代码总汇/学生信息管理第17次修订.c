#include <stdio.h>
#include <math.h>
#include <windows.h>
#include"color.h"

struct sa
{
	int sa;
}sa;
struct da
{
	int da;
}da;
struct zhong
{
	int n;
}n;
struct yin
{
	int d;
}d;
struct yang
{
	char yang[100];
}yang;
struct stu
{
	char mima[100];
}go;
struct sut
{
	char mami[100];
}mami;
int flag=0;				 //删除的标记个数
int love=0;              //删除的标记个数
#define N 100
int getch();//
struct student
{
	char xuehao[11];
	char xingming[21];
	char gender[10];
	char home[100];
	char mingzu[21];
	int  age;
	
};
struct information
{

	char name[21];
	float chinese;
	float maths;
	float english;
};
void studentxinxi();//第二主页面
void information();//学生信息管理模块
void own();//学生成绩管理模块
void lrinformation();//录入学生信息
void cxinfrmation();//查询学生信息
void xginformation();//修改学生信息
void llinformation();//浏览学生信息
void scinformation();//修改学生信息
void zjinformation();//增加学生信息
void lrchengji();//录入学生成绩
void xgchengji();//修改学生成绩
void cxchengji();//查询学生成绩
void llchengji();//浏览学生成绩
void scchengji();//删除学生成绩
void zjchengji();//增加学生成绩
void nickyang();//主页面
/*----------------------------------主页面--------------------------------------*/
void nickyang()
{
	int k;
	system("cls");
	printf(" !!!========大学生自我管理系统=========!!!\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("**	1. 办公室管理	5. 财务管理	  **\n");
	printf("**	2. 教务管理	6. 图书管理       **\n");
	printf("**	3. 科研管理	7. 设备管理       **\n");
	printf("**	4. 人事管理	8. 后勤管理	  **\n");
	printf("**	9. 学生管理	10. 教师管理      **\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("请您在上述功能中选择序号 \n");
	printf("**************************\n");
	scanf("%d", &k);
	
		switch(k)
		{
		case 9:
			studentxinxi();
			break;
		case 2:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();//按任意键返回？、？？？？？？
			nickyang();
			break;
		case 1:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 3:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();//
			nickyang();//
			break;
		case 4:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 5:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 6:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();//
			nickyang();
			break;
		case 7:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 8:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 10:
			system("cls");
			printf("不好意思啦，这个人家还没做啦！\n任意键返回主页面！\n");
			getch();
			nickyang();
			break;
		case 0:
			exit(0);
			break;
		default :
			break;
		}
		if(k!=1&&k!=2&&k!=3&&k!=4&&k!=5&&k!=6&&k!=7&&k!=8&&k!=9&&k!=10&&k!=0)
		{
			printf("您的选择错误！任意键重新选择！\n");	
			getch();
			nickyang();
		}
	}
/*----------------------------------子页面--------------------------------------*/

	void studentxinxi()
	{
		int i;
		system("cls");
		 printf("*********************************************************************\n");
		 printf("	1. 学生个人信息管理模块		2. 学生个人成绩管理模块\n");
	   	printf("		520.返回上一层		0.退出系统\n");
		 printf("*********************************************************************\n");
		scanf("%d",&i);
			switch(i)
			{	case 1:
				information();
				break;
			case 520:
				nickyang();
				break;
			case 0:
				exit(0);
				break;
			case 2:
					own();
				break;
				default:
					break;
			
			}system("cls");
			if(i!=1&&i!=2&&i!=520&&i!=5201314)
			printf("您的选择错误！任意键重新选择！\n");	
			getch();
			studentxinxi();
	}

/*----------------------------------信息模块--------------------------------------*/
	void information()
			{
		int o;
		system("cls");
		  printf("*********************************************************************\n");
				printf("	1.录入学生信息	3.查询学生信息\n");
				printf("	2.修改学生信息	4.浏览学生信息\n");
				printf("	5.删除学生信息	6.增加学生信息\n");
				printf("	    	  520.返回上一级\n");
				printf("	5201314.返回主菜单	0.退出系统	\n");
		  printf("*********************************************************************\n");
				scanf("%d",&o);
				switch (o)
				{
				case 1:
					lrinformation();
					break;
				case 3:
					cxinfrmation();
					break;
				case 2:
					xginformation();
					break;
				case 4:
					llinformation();
					break;
				case 5:
					scinformation();
					break;
				case 6:
					zjinformation();
					break;
				case 520:
				studentxinxi();
				break;
				case 0:
				exit(0);
				break;
				case 5201314:
					nickyang();
				break;
				default :
					break;
				}system("cls");
				if (o!=1&&o!=2&&o!=3&&o!=4&&o!=5&&o!=6&&o!=520&&o!=5201314)
					printf("您的选择错误！任意键重新选择！\n");	
					getch();
					information();
			}
	struct student stu[N];//学生信息管理stu
	void lrinformation()/*-------------------------录入信息---------------------------------*/
				{
				int i;
				system("cls");
				printf("请输入您要录入的学生人数");
				scanf("%d",&n.n );
				for(i=0;i<n.n;i++)
				{
					printf("请输入%d个学生的学号\n",i+1);
					scanf("%s",stu[i].xuehao);
					printf("请输入%d个学生的姓名\n",i+1);
					scanf("%s",stu[i].xingming);
					printf("请输入%d个学生的性别\n",i+1);
					scanf("%s",stu[i].gender);
					printf("请输入%d个学生的家庭住址\n",i+1);
					scanf("%s",stu[i].home);
					printf("请输入%d个学生的名族\n",i+1);
					scanf("%s",stu[i].mingzu);
					printf("请输入%d个学生的年龄\n",i+1);
					scanf("%d",&stu[i].age);
				}
					printf("\n录入完毕,任意键继续！\n");
					getch();
				}
	/*----------------------------------查询信息--------------------------------------*/
				void cxinfrmation()
				{
					int j;
					char no[11];
					system("cls");//
					printf("请输入学号:");
					scanf("%s",no);
					for(j=0;j<n.n;j++)
					{
						if(!strcmp(stu[j].xuehao,no))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("学号:%s\t姓名:%s\t性别:%s\t家庭住址:%s",stu[j].xuehao ,stu[j].xingming ,stu[j].gender,stu[j].home);
							printf("\n名族:%s\t年龄:%d\t",stu[j].mingzu ,stu[j].age );
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n查询完毕,任意键继续！\n");
					getch();
					
				}
				/*---------------------------------修改信息--------------------------------------*/
				void xginformation()
				{
					int j;
					
					char no[11];
					system("cls");
					printf("请输入您要修改的学号:");
					scanf("%s",no);
					for(j=0;j<n.n;j++)
					{
						if(!strcmp(stu[j].xuehao,no))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("请输入新的学号:");
							scanf("%s",stu[j].xuehao);
							printf("请输入新的姓名:");
							scanf("%s",stu[j].xingming );
							printf("请输入新的性别:");
							scanf("%s",stu[j].gender );
							printf("请输入新的家庭住址:");
							scanf("%s",stu[j].home);
							printf("请输入新的名族:");
							scanf("%s",stu[j].mingzu);
							printf("请输入新的年龄:");
							scanf("%d",&stu[j].age);
							printf("学号:%s\t姓名:%s\t性别:%s\t家庭住址:%s",stu[j].xuehao ,stu[j].xingming,stu[j].gender,stu[j].home  );
							printf("名族:%s\t年龄:%d\t",stu[j].mingzu ,stu[j].age );
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n修改完毕,任意键继续！\n");
					getch();
				}
				/*----------------------------------浏览信息--------------------------------------*/
				void llinformation()
				{
					int j;
					system("cls");
					for(j=0;j<n.n-flag;j++)
					{
						printf("\n--------------------------------------------------------------------\n");
						printf("学号:%s\t姓名:%s\t性别:%s\t家庭住址:%s\n",stu[j].xuehao ,stu[j].xingming ,stu[j].gender ,stu[j].home );	
						printf("名族:%s\t年龄:%d\t",stu[j].mingzu ,stu[j].age );
						printf("\n--------------------------------------------------------------------\n");
					}
					printf("\n浏览完毕,任意键继续！\n");
					getch();
				}
				/*----------------------------------删除信息--------------------------------------*/
				void scinformation()
				{
					int i,j;
					char no[11];
					system("cls");
					printf("请输入您要删除的学号:");
					scanf("%s",no);
					for(j=0;j<n.n;j++)
					{
						if(!strcmp(stu[j].xuehao,no))
						{
							for(i=j;i<n.n+1;i++)
								stu[i]=stu[i+1];
							flag++;
						}
					}
					printf("\n删除完毕,任意键继续！\n");
					getch();
				}
				/*------------------------------------增加信息------------------------------------*/
				void zjinformation()
				{
					int i;
				system("cls");
				printf("请输入您要增加的学生人数:\n");
				scanf("%d",&da.da);
				for(i=n.n;i<n.n+da.da;i++)
				{
					printf("请输入%d个学生的学号\n",i+1-flag);
					scanf("%s",stu[i-flag].xuehao);
					printf("请输入%d个学生的姓名\n",i+1-flag);
					scanf("%s",stu[i-flag].xingming);
					printf("请输入%d个学生的性别\n",i+1-flag);
					scanf("%s",stu[i-flag].gender);
					printf("请输入%d个学生的家庭住址\n",i+1-flag);
					scanf("%s",stu[i-flag].home);
					printf("请输入%d个学生的名族\n",i+1-flag);
					scanf("%s",stu[i-flag].mingzu);
					printf("请输入%d个学生的年龄\n",i+1-flag);
					scanf("%d",&stu[i-flag].age);
				}
					n.n += da.da;
					printf("\n增加录入完毕,任意键继续！\n");
					getch();
				}
				/*----------------------------------成绩模块--------------------------------------*/

			void own()
			{	
				int x;
				system("cls");
		 printf("*********************************************************************\n");
				printf("	1.录入学生成绩	3.查询学生成绩\n");
				printf("	2.修改学生成绩	4.浏览学生成绩\n");
				printf("	5.删除学生成绩	6.增加学生成绩\n");
				printf("	    	  520.返回上一级\n");
				printf("	5201314.返回主菜单	0.退出系统\n");
		  printf("*********************************************************************\n");
				scanf("%d",&x);
				
				switch(x)
				{
				case 1:
					lrchengji();
					break;
				case 2:
					xgchengji();
					break;
				case 3:
					cxchengji();
					break;
				case 4:
					llchengji();
					break;
				case 5:
					scchengji();
					break;
				case 6:
					zjchengji();
					break;
				case 520:
					studentxinxi();
					break;
				case 5201314:
					nickyang();
					case 0:
				exit(0);
				break;
					break;
				default :
					break;
				}system("cls");
				if (x!=1&&x!=2&&x!=3&&x!=4&&x!=5&&x!=6&&x!=520&&x!=5201314)
					printf("您的选择错误！任意键重新选择！\n");	
					getch();
					own();

				
			}
			struct information chengji[N];
			/*----------------------------------录入成绩--------------------------------------*/
				 void lrchengji()
				 {
					int i;
					system("cls");
					printf("请输入要录入的学生人数：\n");
					scanf("%d",&d.d);
					for(i=0;i<d.d;i++)
					{
						system("cls");
						printf("请输入%d个学生的姓名：\n",i+1);
						scanf("%s",chengji[i].name);
						printf("请输入%d个学生%s的chinese成绩：\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].chinese);
						printf("请输入%d个学生%s的maths成绩：\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].maths);
						printf("请输入%d个学生%s的english成绩：\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].english);	
					}
						printf("\n录入完毕,任意键继续！\n");
					getch();
				 }
				 /*----------------------------------修改成绩--------------------------------------*/
				 void xgchengji()
				 {
					int j;
					char i[21];
					system("cls");
					printf("请输入要修改的人的姓名:");
					scanf("%s",i);
					for(j=0;j<d.d;j++)
					{
						if(!strcmp(chengji[j].name,i))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("请输入新的chinese成绩:");
							scanf("%f",&chengji[j].chinese);
							printf("请输入新的maths成绩:");
							scanf("%f",&chengji[j].maths);
							printf("请输入新的english成绩:");
							scanf("%f",&chengji[j].english);
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n修改完毕,任意键继续！\n");
					getch();
				 }
				 /*----------------------------查询成绩---------------------------------*/
				 void cxchengji()
				 {
					int j;
					char i[21];
					system("cls");
					printf("请输入姓名:");
					scanf("%s",i);
					for(j=0;j<d.d;j++)
					{
						if(!strcmp(chengji[j].name,i))
						{
							printf("已经找到:\n");
							printf("\n--------------------------------------------------------------------\n");
							printf("%s的chinese成绩是：%.2f\n",chengji[j].name,chengji[j].chinese);
							printf("%s的maths成绩是：%.2f\n",chengji[j].name,chengji[j].maths);
							printf("%s的english成绩是：%.2f\n",chengji[j].name,chengji[j].english);
							printf("\n--------------------------------------------------------------------\n");
							break;
						}	
					}
					printf("\n查询完毕,任意键继续！\n");
						getch();
				 }
				 /*----------------------------------浏览成绩--------------------------------------*/
				 void llchengji()
				 {
					 	int i;
						system("cls");
				for(i=0;i<d.d-love;i++)
				{
					printf("\n--------------------------------------------------------------------\n");
					printf("第%d个学生%s的chinese成绩是：%.2f\n",i+1,chengji[i].name,chengji[i].chinese);
					printf("第%d个学生%s的maths成绩是：%.2f\n",i+1,chengji[i].name,chengji[i].maths);
					printf("第%d个学生%s的english成绩是：%.2f\n",i+1,chengji[i].name,chengji[i].english);
					printf("\n--------------------------------------------------------------------\n");
					
				}
				printf("\n浏览完毕,任意键继续！\n");
				getch();
				 }
				 /*----------------------------------删除成绩--------------------------------------*/
				 void scchengji()
				 {
					 	int j;
						int c;
						char i[21];
						system("cls");
					printf("请输入您要删除的人的姓名:");
					scanf("%s",i);
					for(j=0;j<d.d;j++)
					{
						if(!strcmp(chengji[j].name,i))
						{
							for(c=j;c<d.d+1;c++)
								chengji[c]=chengji[c+1];
							love++;
							break;
						}
					}
					printf("\n删除完毕,任意键继续！\n");
					getch();
				 }
				 /*-----------------------------------增加成绩----------------------------------*/
		void zjchengji()
		{
					int i;
					system("cls");
					printf("请输入要增加的学生人数：\n");
					scanf("%d",&sa.sa);
					for(i=d.d;i<d.d+sa.sa;i++)
					{
						system("cls");
						printf("请输入%d个学生的姓名：\n",i+1-love);
						scanf("%s",chengji[i-love].name);
						printf("请输入%d个学生%s的chinese成绩：\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].chinese);
						printf("请输入%d个学生%s的maths成绩：\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].maths);
						printf("请输入%d个学生%s的english成绩：\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].english);
					}
					d.d=d.d +sa.sa;
					printf("\n增加录入完毕,任意键继续！\n");
					getch();
}



/*----------------------------------主函数--------------------------------------*/

int main(int argc, char* argv[])
{
	

    nickyang();
/*int ooxx;
	printf("\n请输入初始登录密码\n");
	looop:scanf("%d",&ooxx);
		if(ooxx==1)
		{
			system("cls");
printf("为了您的安全要更改您的密码哦！\n请输入新密码:\n");
		loooop:	scanf("%s",go.mima);
				system("cls");
			printf("请确定你的密码\n");
			scanf("%s",yang.yang);
			if(!strcmp(yang.yang,go.mima))
			{
				system("cls");
					printf("请输入密码打开主界面\n");
				loop:	scanf("%s",mami.mami);
						if(!strcmp(go.mima,mami.mami))
						{
							system("cls");
							printf("密码正确!\n");
							getch();
							nickyang();//
						}
						else
						{
							system("cls");
							printf("您的的密码不正确!\n");
							printf("请重新输入密码打开主界面！\n\n");
							goto loop;
						}
			}
			else
			{
				system("cls");
				printf("您两次输入密码不相同哦！\n请重新输入您的新密码！\n");
				goto loooop;
			}
		}
		else
		{
			system("cls");
			printf("不好意思，您的输入有误！\n请重新输入初始密码！\n");
			goto looop;
		}*/
		return 0;
}
