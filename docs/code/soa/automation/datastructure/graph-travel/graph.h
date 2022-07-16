#ifndef GRAPH_H
#define GRAPH_H
#include <string>
using namespace std;

#define MAX 30
//�߽��
typedef struct ENode
{
    int ivex, jvex;            //�ñ����������������������е����
    struct ENode* ilink;       //ָ����һ�������ڶ���ivex�ı�
    struct ENode* jlink;       //ָ����һ�������ڶ���jvex�ı�
}ENode;
//������
typedef struct VNode
{
    int mark;                //���
    string data;             //������Ϣ
    int number;              //������
    ENode* firstedge;
}VNode;
//ͼ
typedef struct
{
    VNode AMlist[MAX];      //�����Ϣ
    int v_num;              //������
    int e_num;              //����
}Graph;                    

void Initilized(Graph* graph);  //��ʼ��ͼ
void CreateGraph(Graph* graph); //����ͼ
void SetMark(Graph* graph);     //���ñ��
void DFS(Graph* graph, int v);  //��ȱ���
void BFS(Graph* graph, int u);  //��ȱ���
void CreateGraph_by_file(Graph* graph);//ͨ���ļ�����ͼ

#endif // !GRAPH_H

