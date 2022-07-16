#include<stdio.h>
#include<malloc.h>
#include<iostream>
#include"graph.h"
#include"myquene.h"
#include"interaction.h"
using namespace std;

int main()
{
    int v1, v2;  //������������
    Graph graph; //������һ��ͼ
    int choose;
    
    while (1)
    {
        Initialize();
        fflush(stdin);
        choose = Intercommand();
        switch (choose)
        {
        case 0:
            exit(0);
        case 2:
            Initilized(&graph);
            CreateGraph(&graph);
            printf("\n������ȹ�ȱ�������ʼ�㣺\n");
            v2 = Get_int();
            v1 = v2;
            printf("\n��ȱ�������:\n�������У�\n");
            SetMark(&graph);
            DFS(&graph, v2);
            printf("\n��ȱ�������:\n�������У�\n");
            SetMark(&graph);
            BFS(&graph, v1);
            Is_refresh();
        case 1:
            Initilized(&graph);
            CreateGraph_by_file(&graph);
            fflush(stdin);
            printf("\n������ȹ�ȱ�������ʼ�㣺\n");
            v2 = Get_int();
            v1 = v2;
            printf("\n��ȱ�������:\n");
            SetMark(&graph);
            DFS(&graph, v2);
            printf("\n��ȱ�������:\n");
            SetMark(&graph);
            BFS(&graph, v1);
            Is_refresh();
        }
    }
    
    return 0;
}