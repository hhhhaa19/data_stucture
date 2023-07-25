#define _CRT_SECURE_NO_WARNINGS 1
//方法一：求和再减去nums中的数字
//方法二：排序加遍历
//方法三：异或
int missingNumber(int* nums, int numsSize) 
{
	int tag = 0;
	for (int i = 0;i < numsSize+1; i++)
	{
		tag ^= i;
	}
	for (int i = 0; i < numsSize; i++)
	{
		tag ^= nums[i];
	}
	return tag;
}