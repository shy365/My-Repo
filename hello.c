#include <stdio.h>


int main()
{
	int arr[10];
	int Left = 0;
	int Right = ((sizeof(arr)) / (sizeof(int)) - 1);
	int SeachNum;


	for (int i = 0; i <= 9; i++)
	{
		printf("请输入数组第%d个数:", i);
		scanf("%d", &arr[i]);
	}

	printf("Right = %d\n", Right);
	printf("请输入要查找的值:");
	scanf("%d", &SeachNum);



	if (arr[Left] > arr[Right])
	{
		printf("arr[%d] = %d\n", Left, arr[Left]);
		printf("arr[%d] = %d\n", Right, arr[Right]);
		printf("数组无序，无法使用二分查找\n");
	}
	else
	{

	}

	while (SeachNum != arr[Left + Right])
	{
		if (SeachNum >= arr[Left + Right])
		{
			Left = (Left + Right) / 2;
		}
		else
		{
			Right = (Left + Right) / 2;
		}

		if (Left + 1 == Right)
		{
			printf("未找到匹配值\n");
			return -1;
		}
	}
	printf("找到了，下标是arr[%d]:", Left + Right);

	return 0;



}