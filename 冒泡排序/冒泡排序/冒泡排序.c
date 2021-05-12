#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 //冒泡排序函数
bubble(int arr[], int n)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{//交换两个数

				int med = 0;
				med = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = med;
			}
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,n);
	int x = 0;
			for (x = 0; x < n; x++)
				printf("%d ", arr[x]);

			



	return 0;
}