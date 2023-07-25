#define _CRT_SECURE_NO_WARNINGS 1
#include"Selist.h"
//test for init
void test1(Selist* psl)
{
	init_Selist(psl);
}
int main()
{
	Selist data;
	test1(&data);
	return 0;
}