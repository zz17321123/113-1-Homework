// (Pyramid Pattern of Asterisks) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 9; i++) 
	{
		printf("\t"); // �N�C�@��e�� Tab ���X�Ŷ�

		if (i % 2 != 0) // �� i ���_�ƮɡA�p 1�B3�B5�B7�B9 ����U�C�{�� (���P�����ƶq)
		{
			for (int j = 0; j < (9 - i) / 2; j++) // �p��P���e���A�һݶ�R�ťռƶq
				printf(" "); // ���L�ť�

			for (int k = 1; k <= i; k++) //�p�⥴�L�h�ּƶq���P��
				printf("*"); // ���L�P��
		}
		else
			printf("\n"); // ����U�@��
	}

	printf("\n");

	system("pause");
	return 0;
}