#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//ԭ���Ƴ����������е�Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)
//����һ��������ɾ��O(N^2),O(1)��ɾ���ǰѺ���������ǰ��
//��������˫ָ�룬һ��Ѱ��val,һ����������
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
//ɾ�����������е��ظ���,����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����
//˫ָ�룬һ��Ѱ��val,һ����������
int removeDuplicates(int* nums, int numsSize)
{
	int i = 0;//����
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