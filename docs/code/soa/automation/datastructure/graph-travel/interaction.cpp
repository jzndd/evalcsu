#include"interaction.h"
#include<iostream>
#include<stdio.h>
#include<conio.h> 
using namespace std;
#define backColor 7
#define textColor 1
int Get_int()
{
	int num = 0, i = 0;
	char ch[11] = { 0 };
label1:
	num = 0;
	scanf_s("%s", ch, 10);
	i = 0;
	if (ch[0] == 45 || ch[0] == 43)
	{
		i++;
	}
	while (ch[i])
	{
		if (ch[i] < '0' || ch[i]>'9')
		{
			cout << "�����������������:" << endl;
			goto label1;
		}
		else {
			num = num * 10 + (int)ch[i] - 48;
		}
		i++;

	}
	if (ch[0] == 45)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

void Initialize()
{
	system("cls");
	//���ñ�����ɫ
	char command[9] = "color 07";		//Ĭ����ɫ	
	command[6] = '0' + backColor;		//��backColor������Ϊ�ַ���(������ɫ����Ϊ7��Ϊ��ɫ�� 
	command[7] = '0' + textColor;		//��textColor������Ϊ�ַ��� ��������ɫ����Ϊ1��Ϊ��ɫ��
	system(command);				    //����ϵͳ���� 
	printf("                        ***********��ͨ������ȱ����͹�ȱ���***********\n");
	printf("                        |    \t0. �˳�                               |\n");
	printf("                        |    \t1. ֱ��ͨ���ļ������ͼ               |\n");
	printf("                        |    \t2. �ֶ������ͼ��Ϣ                   |\n");
	printf("                        ***********************************************\n");
}

int Intercommand()
{
	cout << "����������ѡ��:";
	int input;
	while (1)
	{
		int n = Get_int();
		if (n >= 0 && n < 3)
		{
			input = n;
			break;
		}

		cout << "������������䣺";
	}

	return input;
}

void Is_refresh()
{
	printf("\n");
	cout << "----------------------------------------------------" << endl;
	cout << "���������ַ���ɲ鿴���ص��˵�ҳ��:" << endl;
	_getch();
}