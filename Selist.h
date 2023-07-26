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
//初始化
void init_Selist(Selist* psl);
//头插
void push_front_Selist(Selist* psl,DATATYPE tag);
//头删
void pop_front_Selist(Selist* psl);
//尾插
void push_back_Selist(Selist* psl,DATATYPE tag);
//尾删
void pop_back_Selist(Selist* psl);
//查找
int find_Selist(Selist* psl, DATATYPE tag);
//在下标pos处插入
void push_pos_Selist(Selist* psl, int pos, DATATYPE tag);
//在下标pos处删除
void pop_pos_Selist(Selist* psl, int pos);
//销毁
void Destory_Selist(Selist* psl);
//打印
void Print_Selist(Selist* psl);