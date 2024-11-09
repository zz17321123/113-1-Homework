// (Bubble Sort) �{��
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void BubbleSort(int arr[]);

int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printf("Data items in original order:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

    printf("\n\nData items in processing:\n");

    BubbleSort(a);

	printf("\nData items in ascending order:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");

	system("pause");
	return 0;
}

void BubbleSort(int arr[])
{
    int count = 1; // �������檺����

    for (int i = 0; i < SIZE - 1; i++) // �~�h�j�鱱��ƧǦ���
    { 
        int swapped = 0; // �����O�_�i��L�洫

        /*
            �C�����h�j�������ƴ��1
            1 : j ���� 0 ~ (SIZE - 2)
            2 : j ���� 0 ~ (SIZE - 3)
            3 : j ���� 0 ~ (SIZE - 4)

            ex. 
            SIZE = 5
            array[SIZE] = { 2, 5, 1 , 4, 3 } ��;
            1 : j ���� 0 ~ 3 (�Ƨ� a[4] ���̤j���ƭ� 5) 
            2 : j ���� 0 ~ 2 (�Ƨ� a[3] �����j���ƭ� 4)
            3 : j ���� 0 ~ 1 
        */
        for (int j = 0; j < SIZE - i - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            {
                // �洫 arr[j] �M arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // �O�����洫�o��
            }
        }

        printf("%2d:", count);

        for (int i = 0; i < SIZE; i++)
        {
            printf("%4d", arr[i]);
        }

        printf("  swapped = %d\n", swapped);

        // �p�G�S���洫�o�͡A���e�����Ƨ�
        if (swapped == 0) 
            break;

        count++;
    }
}