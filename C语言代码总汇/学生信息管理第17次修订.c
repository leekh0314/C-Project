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
int flag=0;				 //ɾ���ı�Ǹ���
int love=0;              //ɾ���ı�Ǹ���
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
void studentxinxi();//�ڶ���ҳ��
void information();//ѧ����Ϣ����ģ��
void own();//ѧ���ɼ�����ģ��
void lrinformation();//¼��ѧ����Ϣ
void cxinfrmation();//��ѯѧ����Ϣ
void xginformation();//�޸�ѧ����Ϣ
void llinformation();//���ѧ����Ϣ
void scinformation();//�޸�ѧ����Ϣ
void zjinformation();//����ѧ����Ϣ
void lrchengji();//¼��ѧ���ɼ�
void xgchengji();//�޸�ѧ���ɼ�
void cxchengji();//��ѯѧ���ɼ�
void llchengji();//���ѧ���ɼ�
void scchengji();//ɾ��ѧ���ɼ�
void zjchengji();//����ѧ���ɼ�
void nickyang();//��ҳ��
/*----------------------------------��ҳ��--------------------------------------*/
void nickyang()
{
	int k;
	system("cls");
	printf(" !!!========��ѧ�����ҹ���ϵͳ=========!!!\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("**	1. �칫�ҹ���	5. �������	  **\n");
	printf("**	2. �������	6. ͼ�����       **\n");
	printf("**	3. ���й���	7. �豸����       **\n");
	printf("**	4. ���¹���	8. ���ڹ���	  **\n");
	printf("**	9. ѧ������	10. ��ʦ����      **\n");
	printf("********************************************\n");
	printf("********************************************\n");
	printf("����������������ѡ����� \n");
	printf("**************************\n");
	scanf("%d", &k);
	
		switch(k)
		{
		case 9:
			studentxinxi();
			break;
		case 2:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();//����������أ���������������
			nickyang();
			break;
		case 1:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();
			nickyang();
			break;
		case 3:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();//
			nickyang();//
			break;
		case 4:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();
			nickyang();
			break;
		case 5:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();
			nickyang();
			break;
		case 6:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();//
			nickyang();
			break;
		case 7:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();
			nickyang();
			break;
		case 8:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
			getch();
			nickyang();
			break;
		case 10:
			system("cls");
			printf("������˼��������˼һ�û������\n�����������ҳ�棡\n");
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
			printf("����ѡ��������������ѡ��\n");	
			getch();
			nickyang();
		}
	}
/*----------------------------------��ҳ��--------------------------------------*/

	void studentxinxi()
	{
		int i;
		system("cls");
		 printf("*********************************************************************\n");
		 printf("	1. ѧ��������Ϣ����ģ��		2. ѧ�����˳ɼ�����ģ��\n");
	   	printf("		520.������һ��		0.�˳�ϵͳ\n");
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
			printf("����ѡ��������������ѡ��\n");	
			getch();
			studentxinxi();
	}

/*----------------------------------��Ϣģ��--------------------------------------*/
	void information()
			{
		int o;
		system("cls");
		  printf("*********************************************************************\n");
				printf("	1.¼��ѧ����Ϣ	3.��ѯѧ����Ϣ\n");
				printf("	2.�޸�ѧ����Ϣ	4.���ѧ����Ϣ\n");
				printf("	5.ɾ��ѧ����Ϣ	6.����ѧ����Ϣ\n");
				printf("	    	  520.������һ��\n");
				printf("	5201314.�������˵�	0.�˳�ϵͳ	\n");
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
					printf("����ѡ��������������ѡ��\n");	
					getch();
					information();
			}
	struct student stu[N];//ѧ����Ϣ����stu
	void lrinformation()/*-------------------------¼����Ϣ---------------------------------*/
				{
				int i;
				system("cls");
				printf("��������Ҫ¼���ѧ������");
				scanf("%d",&n.n );
				for(i=0;i<n.n;i++)
				{
					printf("������%d��ѧ����ѧ��\n",i+1);
					scanf("%s",stu[i].xuehao);
					printf("������%d��ѧ��������\n",i+1);
					scanf("%s",stu[i].xingming);
					printf("������%d��ѧ�����Ա�\n",i+1);
					scanf("%s",stu[i].gender);
					printf("������%d��ѧ���ļ�ͥסַ\n",i+1);
					scanf("%s",stu[i].home);
					printf("������%d��ѧ��������\n",i+1);
					scanf("%s",stu[i].mingzu);
					printf("������%d��ѧ��������\n",i+1);
					scanf("%d",&stu[i].age);
				}
					printf("\n¼�����,�����������\n");
					getch();
				}
	/*----------------------------------��ѯ��Ϣ--------------------------------------*/
				void cxinfrmation()
				{
					int j;
					char no[11];
					system("cls");//
					printf("������ѧ��:");
					scanf("%s",no);
					for(j=0;j<n.n;j++)
					{
						if(!strcmp(stu[j].xuehao,no))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("ѧ��:%s\t����:%s\t�Ա�:%s\t��ͥסַ:%s",stu[j].xuehao ,stu[j].xingming ,stu[j].gender,stu[j].home);
							printf("\n����:%s\t����:%d\t",stu[j].mingzu ,stu[j].age );
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n��ѯ���,�����������\n");
					getch();
					
				}
				/*---------------------------------�޸���Ϣ--------------------------------------*/
				void xginformation()
				{
					int j;
					
					char no[11];
					system("cls");
					printf("��������Ҫ�޸ĵ�ѧ��:");
					scanf("%s",no);
					for(j=0;j<n.n;j++)
					{
						if(!strcmp(stu[j].xuehao,no))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("�������µ�ѧ��:");
							scanf("%s",stu[j].xuehao);
							printf("�������µ�����:");
							scanf("%s",stu[j].xingming );
							printf("�������µ��Ա�:");
							scanf("%s",stu[j].gender );
							printf("�������µļ�ͥסַ:");
							scanf("%s",stu[j].home);
							printf("�������µ�����:");
							scanf("%s",stu[j].mingzu);
							printf("�������µ�����:");
							scanf("%d",&stu[j].age);
							printf("ѧ��:%s\t����:%s\t�Ա�:%s\t��ͥסַ:%s",stu[j].xuehao ,stu[j].xingming,stu[j].gender,stu[j].home  );
							printf("����:%s\t����:%d\t",stu[j].mingzu ,stu[j].age );
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n�޸����,�����������\n");
					getch();
				}
				/*----------------------------------�����Ϣ--------------------------------------*/
				void llinformation()
				{
					int j;
					system("cls");
					for(j=0;j<n.n-flag;j++)
					{
						printf("\n--------------------------------------------------------------------\n");
						printf("ѧ��:%s\t����:%s\t�Ա�:%s\t��ͥסַ:%s\n",stu[j].xuehao ,stu[j].xingming ,stu[j].gender ,stu[j].home );	
						printf("����:%s\t����:%d\t",stu[j].mingzu ,stu[j].age );
						printf("\n--------------------------------------------------------------------\n");
					}
					printf("\n������,�����������\n");
					getch();
				}
				/*----------------------------------ɾ����Ϣ--------------------------------------*/
				void scinformation()
				{
					int i,j;
					char no[11];
					system("cls");
					printf("��������Ҫɾ����ѧ��:");
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
					printf("\nɾ�����,�����������\n");
					getch();
				}
				/*------------------------------------������Ϣ------------------------------------*/
				void zjinformation()
				{
					int i;
				system("cls");
				printf("��������Ҫ���ӵ�ѧ������:\n");
				scanf("%d",&da.da);
				for(i=n.n;i<n.n+da.da;i++)
				{
					printf("������%d��ѧ����ѧ��\n",i+1-flag);
					scanf("%s",stu[i-flag].xuehao);
					printf("������%d��ѧ��������\n",i+1-flag);
					scanf("%s",stu[i-flag].xingming);
					printf("������%d��ѧ�����Ա�\n",i+1-flag);
					scanf("%s",stu[i-flag].gender);
					printf("������%d��ѧ���ļ�ͥסַ\n",i+1-flag);
					scanf("%s",stu[i-flag].home);
					printf("������%d��ѧ��������\n",i+1-flag);
					scanf("%s",stu[i-flag].mingzu);
					printf("������%d��ѧ��������\n",i+1-flag);
					scanf("%d",&stu[i-flag].age);
				}
					n.n += da.da;
					printf("\n����¼�����,�����������\n");
					getch();
				}
				/*----------------------------------�ɼ�ģ��--------------------------------------*/

			void own()
			{	
				int x;
				system("cls");
		 printf("*********************************************************************\n");
				printf("	1.¼��ѧ���ɼ�	3.��ѯѧ���ɼ�\n");
				printf("	2.�޸�ѧ���ɼ�	4.���ѧ���ɼ�\n");
				printf("	5.ɾ��ѧ���ɼ�	6.����ѧ���ɼ�\n");
				printf("	    	  520.������һ��\n");
				printf("	5201314.�������˵�	0.�˳�ϵͳ\n");
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
					printf("����ѡ��������������ѡ��\n");	
					getch();
					own();

				
			}
			struct information chengji[N];
			/*----------------------------------¼��ɼ�--------------------------------------*/
				 void lrchengji()
				 {
					int i;
					system("cls");
					printf("������Ҫ¼���ѧ��������\n");
					scanf("%d",&d.d);
					for(i=0;i<d.d;i++)
					{
						system("cls");
						printf("������%d��ѧ����������\n",i+1);
						scanf("%s",chengji[i].name);
						printf("������%d��ѧ��%s��chinese�ɼ���\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].chinese);
						printf("������%d��ѧ��%s��maths�ɼ���\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].maths);
						printf("������%d��ѧ��%s��english�ɼ���\n",i+1,chengji[i].name);
						scanf("%f",&chengji[i].english);	
					}
						printf("\n¼�����,�����������\n");
					getch();
				 }
				 /*----------------------------------�޸ĳɼ�--------------------------------------*/
				 void xgchengji()
				 {
					int j;
					char i[21];
					system("cls");
					printf("������Ҫ�޸ĵ��˵�����:");
					scanf("%s",i);
					for(j=0;j<d.d;j++)
					{
						if(!strcmp(chengji[j].name,i))
						{
							printf("\n--------------------------------------------------------------------\n");
							printf("�������µ�chinese�ɼ�:");
							scanf("%f",&chengji[j].chinese);
							printf("�������µ�maths�ɼ�:");
							scanf("%f",&chengji[j].maths);
							printf("�������µ�english�ɼ�:");
							scanf("%f",&chengji[j].english);
							printf("\n--------------------------------------------------------------------\n");
							break;
						}
					}
					printf("\n�޸����,�����������\n");
					getch();
				 }
				 /*----------------------------��ѯ�ɼ�---------------------------------*/
				 void cxchengji()
				 {
					int j;
					char i[21];
					system("cls");
					printf("����������:");
					scanf("%s",i);
					for(j=0;j<d.d;j++)
					{
						if(!strcmp(chengji[j].name,i))
						{
							printf("�Ѿ��ҵ�:\n");
							printf("\n--------------------------------------------------------------------\n");
							printf("%s��chinese�ɼ��ǣ�%.2f\n",chengji[j].name,chengji[j].chinese);
							printf("%s��maths�ɼ��ǣ�%.2f\n",chengji[j].name,chengji[j].maths);
							printf("%s��english�ɼ��ǣ�%.2f\n",chengji[j].name,chengji[j].english);
							printf("\n--------------------------------------------------------------------\n");
							break;
						}	
					}
					printf("\n��ѯ���,�����������\n");
						getch();
				 }
				 /*----------------------------------����ɼ�--------------------------------------*/
				 void llchengji()
				 {
					 	int i;
						system("cls");
				for(i=0;i<d.d-love;i++)
				{
					printf("\n--------------------------------------------------------------------\n");
					printf("��%d��ѧ��%s��chinese�ɼ��ǣ�%.2f\n",i+1,chengji[i].name,chengji[i].chinese);
					printf("��%d��ѧ��%s��maths�ɼ��ǣ�%.2f\n",i+1,chengji[i].name,chengji[i].maths);
					printf("��%d��ѧ��%s��english�ɼ��ǣ�%.2f\n",i+1,chengji[i].name,chengji[i].english);
					printf("\n--------------------------------------------------------------------\n");
					
				}
				printf("\n������,�����������\n");
				getch();
				 }
				 /*----------------------------------ɾ���ɼ�--------------------------------------*/
				 void scchengji()
				 {
					 	int j;
						int c;
						char i[21];
						system("cls");
					printf("��������Ҫɾ�����˵�����:");
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
					printf("\nɾ�����,�����������\n");
					getch();
				 }
				 /*-----------------------------------���ӳɼ�----------------------------------*/
		void zjchengji()
		{
					int i;
					system("cls");
					printf("������Ҫ���ӵ�ѧ��������\n");
					scanf("%d",&sa.sa);
					for(i=d.d;i<d.d+sa.sa;i++)
					{
						system("cls");
						printf("������%d��ѧ����������\n",i+1-love);
						scanf("%s",chengji[i-love].name);
						printf("������%d��ѧ��%s��chinese�ɼ���\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].chinese);
						printf("������%d��ѧ��%s��maths�ɼ���\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].maths);
						printf("������%d��ѧ��%s��english�ɼ���\n",i+1-love,chengji[i-love].name);
						scanf("%f",&chengji[i-love].english);
					}
					d.d=d.d +sa.sa;
					printf("\n����¼�����,�����������\n");
					getch();
}



/*----------------------------------������--------------------------------------*/

int main(int argc, char* argv[])
{
	

    nickyang();
/*int ooxx;
	printf("\n�������ʼ��¼����\n");
	looop:scanf("%d",&ooxx);
		if(ooxx==1)
		{
			system("cls");
printf("Ϊ�����İ�ȫҪ������������Ŷ��\n������������:\n");
		loooop:	scanf("%s",go.mima);
				system("cls");
			printf("��ȷ���������\n");
			scanf("%s",yang.yang);
			if(!strcmp(yang.yang,go.mima))
			{
				system("cls");
					printf("�����������������\n");
				loop:	scanf("%s",mami.mami);
						if(!strcmp(go.mima,mami.mami))
						{
							system("cls");
							printf("������ȷ!\n");
							getch();
							nickyang();//
						}
						else
						{
							system("cls");
							printf("���ĵ����벻��ȷ!\n");
							printf("��������������������棡\n\n");
							goto loop;
						}
			}
			else
			{
				system("cls");
				printf("�������������벻��ͬŶ��\n�������������������룡\n");
				goto loooop;
			}
		}
		else
		{
			system("cls");
			printf("������˼��������������\n�����������ʼ���룡\n");
			goto looop;
		}*/
		return 0;
}
