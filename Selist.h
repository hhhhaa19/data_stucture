#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include <stdlib.h>
#define DATATYPE int
typedef struct Selist
{
	DATATYPE* data;
	int sz;
	int capicty;
}Selist;
//��ʼ��
void init_Selist(Selist* psl);
//ͷ��
void push_front_Selist(Selist* psl,DATATYPE tag);
//ͷɾ
void pop_front_Selist(Selist* psl);
//β��
void push_back_Selist(Selist* psl,DATATYPE tag);
//βɾ
void pop_back_Selist(Selist* psl);
//����
int find_Selist(Selist* psl, DATATYPE tag);
//���±�pos������
void push_pos_Selist(Selist* psl, int pos, DATATYPE tag);
//���±�pos��ɾ��
void pop_pos_Selist(Selist* psl, int pos);
//����
void Destory_Selist(Selist* psl);
//��ӡ
void Print_Selist(Selist* psl);