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
void init_Selist(Selist* data);
