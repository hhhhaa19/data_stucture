#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

//方法一
//一个个旋转
void rotate(int* nums, int numsSize, int k)
{
	k %= numsSize;
	while (k--)
	{
	int temp = nums[numsSize-1];
	for (int i = 0; i < numsSize - 1; i++)
	{
		nums[numsSize - 1- i] = nums[numsSize - 2 - i];
	}
	nums[0] = temp;
	}
}
//方法二
//新建函数在放进去
void rotate2(int* nums, int numsSize, int k)
{
	k %= numsSize;
	int* temp = (int*)malloc(sizeof(int) * numsSize);
#if 0
	for (int i = 0; i < k; i++)
	{
		temp[i] = nums[numsSize - k + i];
	}
	for (int i = 0; i < numsSize - k; i++)
	{
		temp[ k+i] = nums[i];
	}
#endif
	//也可以用memcpy
	memcpy(temp, nums+numsSize- k, sizeof(int) * k);
	memcpy(temp+k, nums , sizeof(int)*(numsSize-k));
	memcpy(nums,temp,sizeof(int)*numsSize);
	free(temp);
	temp = NULL;

}
//方法三，三次nizhuan
void reverse(int *start,int *end)
{
	while (start < end)
	{
		*start = (*start) ^ (*end);
		*end = (*start) ^ (*end);
		*start =(*start) ^ (*end);
		start++;
		end--;
	}
}
void rotate3(int* nums, int numsSize, int k)
{
	k %= numsSize;
	reverse(nums, nums + numsSize - k-1);
	reverse(nums + numsSize - k, nums + numsSize - 1);
	reverse(nums, nums + numsSize - 1);
}
