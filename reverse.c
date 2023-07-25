#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����

//����һ
//һ������ת
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
//������
//�½������ڷŽ�ȥ
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
	//Ҳ������memcpy
	memcpy(temp, nums+numsSize- k, sizeof(int) * k);
	memcpy(temp+k, nums , sizeof(int)*(numsSize-k));
	memcpy(nums,temp,sizeof(int)*numsSize);
	free(temp);
	temp = NULL;

}
//������������nizhuan
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
