#include <stdio.h>


int main()
{
	int arr[10];
	int Left = 0;
	int Right = ((sizeof(arr)) / (sizeof(int)) - 1);
	int SeachNum;


	for (int i = 0; i <= 9; i++)
	{
		printf("�����������%d����:", i);
		scanf("%d", &arr[i]);
	}

	printf("Right = %d\n", Right);
	printf("������Ҫ���ҵ�ֵ:");
	scanf("%d", &SeachNum);



	if (arr[Left] > arr[Right])
	{
		printf("arr[%d] = %d\n", Left, arr[Left]);
		printf("arr[%d] = %d\n", Right, arr[Right]);
		printf("���������޷�ʹ�ö��ֲ���\n");
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
			printf("δ�ҵ�ƥ��ֵ\n");
			return -1;
		}
	}
	printf("�ҵ��ˣ��±���arr[%d]:", Left + Right);

	return 0;



}