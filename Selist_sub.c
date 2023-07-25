#define _CRT_SECURE_NO_WARNINGS 1
#include"Selist.h"
void init_Selist(Selist* psl) 
{
	psl->data = (DATATYPE*)malloc(sizeof(DATATYPE) * 4);
	psl->sz = 0;
	psl->capicty = 4;
}