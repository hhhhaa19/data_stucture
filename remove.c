#define _CRT_SECURE_NO_WARNINGS 1
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
	return j+1;
}