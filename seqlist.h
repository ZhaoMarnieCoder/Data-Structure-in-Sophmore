#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>


typedef int	SQDataType;

typedef struct SeqList
{
	SQDataType* a; 
	int size; // ʵ�ʷ����ݵ�����
	int capacity; //�������������

}SL;

// ��ɾ�Ĳ�Ƚӿں���
void SeqListInit(SL* ps);  // ��ʼ��
void SeqListPrint(SL* ps);  // ��ӡ˳���
void SeqListDestory(SL* ps); // ˳��������

void SeqListPushBack(SL* ps, SQDataType x); // β��
void SeqListPushFront(SL* ps, SQDataType x); // ͷ��
void SeqListPopBack(SL* ps); // βɾ
void SeqListPopFront(SL* ps); // ͷɾ
void SeqListInsert(SL* ps, int pos, SQDataType x); // ��һ��λ�õĲ�
void SeqListErase(SL* ps, int pos); // ɾ��ָ��λ�õ�����

int SeqListFind(SL* ps, SQDataType x); // ��ѯ����
void SeqListModity(SL* ps, int pos, SQDataType x); // �޸�ָ������

