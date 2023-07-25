#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
#if 1
int main()
{
	int arr[4] = { 1,2,3,4 };
	rotate3(arr, sizeof(arr) / sizeof(arr[0]), 5);
	return 0;
}
#endif