#define _CRT_SECURE_NO_WARNINGS 1
#include"Selist.h"
//test for init
void test1(Selist* psl)
{
	init_Selist(psl);
	push_front_Selist(psl, 4);
	push_front_Selist(psl, 3);
	push_front_Selist(psl, 2);
	push_front_Selist(psl, 1);
	pop_front_Selist(psl);
	pop_back_Selist(psl);
	push_back_Selist(psl,5);

	push_pos_Selist(psl, 1,8);
	pop_pos_Selist(psl, 0);
	Print_Selist(psl);
	Destory_Selist(psl);
}
int main()
{
	Selist data;
	test1(&data);
	return 0;
}