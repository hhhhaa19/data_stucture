#define _CRT_SECURE_NO_WARNINGS 1
#include"Selist.h"

void init_Selist(Selist* psl) 
{
	assert(psl);
	psl->data = (DATATYPE*)malloc(sizeof(DATATYPE) * 4);
	if (psl->data == NULL)
	{
		perror("malloc");
		exit(1);
	}
	psl->sz = 0;
	psl->capicty = 4;
}


void Check_Selist(Selist* psl)
{
	if (psl->sz == psl->capicty)
	{
		DATATYPE* temp = (DATATYPE*)realloc(psl->data, sizeof(DATATYPE) * (psl->capicty) * 2);
		if (temp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		else
		{
			psl->data = temp;
			psl->capicty *= 2;
		}
		temp = NULL;
	}
}


void push_front_Selist(Selist* psl,DATATYPE tag)
{//检查容量，不够的话扩容
	assert(psl);
	Check_Selist(psl);
#if 0
	int i = 0;
	while(i<psl->sz)
	{
		psl->data[psl->sz - i] = psl->data[psl->sz - i - 1];
		i++;
	}
	psl->data[0] = tag;
	psl->sz++;
#endif
#if 1//用嵌套调用
	push_pos_Selist(psl, 0, tag);
#endif
}


void pop_front_Selist(Selist* psl)
{//判断有没有删到底
	assert(psl->sz);
//判断是否为空指针
	assert(psl);
#if 0
	int i = 0;
	while (i < psl->sz-1)
	{
		psl->data[i] = psl->data[i + 1];
		i++;
	}
	psl->sz--;
#endif
#if 1
	pop_pos_Selist(psl, 0);
#endif
}

void pop_back_Selist(Selist* psl)
{
	//判断有没有删到底
	assert(psl->sz);
//判断是否为空指针
	assert(psl);
#if 0
	psl -> sz--;
#endif
#if 1
	pop_pos_Selist(psl, psl->sz - 1);
#endif
}

void push_back_Selist(Selist* psl, DATATYPE tag)
{
	assert(psl);
	Check_Selist(psl);
#if 0
	psl->data[psl->sz++] = tag;
#endif
#if 1
	push_pos_Selist(psl, psl->sz, tag);
#endif
}

int find_Selist(Selist* psl, DATATYPE tag)
{
	assert(psl);
	int i = 0;
	while (i < psl->sz)
	{
		if (psl->data[i] == tag)
		{
			return i;
		}
		i++;
	}
	return -1;
}

void push_pos_Selist(Selist* psl, int pos,DATATYPE tag)
{
	assert(psl);
	Check_Selist(psl);
	int i = 0;
	while (i < psl->sz-pos)
	{
		psl->data[psl->sz - i] = psl->data[psl->sz - 1 - i];
		i++;
	}
	psl->data[pos] = tag;
	psl->sz++;
}

void pop_pos_Selist(Selist* psl, int pos)
{
	assert(psl);
	int i = 0;
	while (i < psl->sz - pos-1)
	{
		psl->data[pos+ i] = psl->data[pos+ 1 + i];
		i++;
	}
	psl->sz--;
}

void Destory_Selist(Selist* psl)
{
	assert(psl);
	free(psl->data);
	psl->data = NULL;
	psl->sz = 0;
	psl->capicty = 0;

}

void Print_Selist(Selist* psl)
{
	assert(psl);
	for (int i = 0; i < psl->sz; i++)
	{
		printf("%d ", psl->data[i]);
	}
	//每次打印完换行
	printf("\n");
}