#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
//���� �ϲ� nums2 �� nums1 �У�ʹ�ϲ��������ͬ���� �ǵݼ�˳�� ���С�
//ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������ nums1 �С�Ϊ��Ӧ�����������nums1 �ĳ�ʼ����Ϊ m + n��
//����ǰ m ��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ��� n ��Ԫ��Ϊ 0 ��Ӧ���ԡ�nums2 �ĳ���Ϊ n ��
//�Ӻ���ǰ�Ҵ�ı��⸲��
void merge2(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);
void test()
{
	int arr[] = {1,2,3,0,0,0};
	int arr2[] = { 2,5,6 };
	merge2(arr,6,3,arr2, 3, 3);
}
void merge2 (int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i = m-1;//����num1
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
			break;//Ϊʲôoj�ϲ��У���
		}
	}
	while (j >= 0)
	{
		nums1[end] = nums2[j];
		end--;
		j--;
	}
}