#define _CRT_SECURE_NO_WARNINGS 1
//����һ������ټ�ȥnums�е�����
//������������ӱ���
//�����������
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