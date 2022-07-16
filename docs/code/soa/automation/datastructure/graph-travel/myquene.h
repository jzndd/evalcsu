#ifndef MYQUENE_H
#define MYQUENE_H

typedef struct QENode
{
    int data;
    struct QENode* next;
}QENode;                  //���н�� 
typedef struct
{
    QENode* rear;
    QENode* front;
}LinkQueue;               //���� 

void InitQueue(LinkQueue* Q);           //��ʼ������
void QueueAppend(LinkQueue* Q, int v);  //���Ӷ���Ԫ��
void QueueDelete(LinkQueue* Q, int* v); //���ٶ���Ԫ��

#endif
