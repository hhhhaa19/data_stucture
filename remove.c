#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1)
//方法一：遍历并删除O(N^2),O(1)，删除是把后面数字先前移
//方法二：双指针，一个寻找val,一个遍历数组
int removeElement(int* nums, int numsSize, int val);
void test_for_removeElement()
{
	int arr[] = {1, 2, 2, 3};
	removeElement(arr, 4, 2);

}
int removeElement(int* nums, int numsSize, int val)
{

	int i = 0;
	int j = 0;
	while (i < numsSize)
	{
		if (nums[i] !=val)
		{
			nums[j] = nums[i];
			j++;
			i++;
		}
		else
			i++;
	}
	return j;
}
void test_for_removeDuplicates()
{
	int arr[] = { 1,1 };
	removeDuplicates( arr,2 );
}
//删除排序数组中的重复项,给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
//双指针，一个寻找val,一个遍历数组
int removeDuplicates(int* nums, int numsSize)
{
	int i = 0;//遍历
	int j = 0;
	while (i < numsSize)
	{
		if (i == numsSize - 1)
		{
			
			nums[j] = nums[i];
			j++;
			i++;
		}
		else
		{
			if (nums[i] == nums[i + 1])
			{
				nums[j] = nums[i];
				j++;
				while (nums[i] == nums[i + 1] && i < numsSize - 1)
				{
					i++;
				}
				i++;
			}
			else
			{
				nums[j] = nums[i];
				i++;
				j++;
			}
		}
	}
	return j;
}