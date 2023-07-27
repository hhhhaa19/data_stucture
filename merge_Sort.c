#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，
//其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
//从后往前找大的避免覆盖
void merge2(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);
void test()
{
	int arr[] = {1,2,3,0,0,0};
	int arr2[] = { 2,5,6 };
	merge2(arr,6,3,arr2, 3, 3);
}
void merge2 (int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i = m-1;//控制num1
	int j = n-1;
	int end = m + n - 1;
	while (i >= 0)
	{
		if (nums2[j] >= nums1[i])
		{
			nums1[end] = nums2[j];
			end--;
			j--;
		}
		else
		{
			nums1[end] = nums1[i];
			end--;
			i--;
		}
		if (j == -1)
		{
			break;//为什么oj上不行！！
		}
	}
	while (j >= 0)
	{
		nums1[end] = nums2[j];
		end--;
		j--;
	}
}