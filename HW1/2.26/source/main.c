// (Multiples) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int multiple_num;
	int base_num;

	printf("�п�J �Ĥ@�� ���: ");
	scanf("%d", &multiple_num);

	printf("�п�J �ĤG�� ���: ");
	scanf("%d", &base_num);

	printf("\n");

	if (base_num != 0) // �P�_ �ĤG�� ��ƬO�_���� 0
	{
		if (multiple_num % base_num == 0) // �P�_ multiple_num �O�_�i�H�Q base_num �㰣
		{
			printf("%d �O %d ������\n", multiple_num, base_num);
		}
		else
		{
			printf("%d ���O %d ������\n", multiple_num, base_num);
		}
	}
	else
		printf("�ĤG�� ��ƿ�J���ର 0\n");

	system("pause");
	return 0;
}