#define _CRT_SECURE_NO_WARNINGS 1
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
	return j+1;
}