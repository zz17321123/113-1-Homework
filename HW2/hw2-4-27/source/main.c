// (Pythagorean Triples) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; // �T���ξF�� (�̵u��)
	int b; // �T���ι���
	int c; // �T���α��� (�̪���)

	int count = 0;

	printf("%s%2c%4s%2c%4s\n", "a*a", '+', "b*b", '=', "c*c");
	printf("\n");

	/*
		����w�z(�ɤO�}�Ѫk):

		�ھ��D�ت��n�D�A�D�X c <= 500 �Ҧ����ŦX����w�z���ƭȡA
		�N a�Bb �P c ���O�� for �j��q 1 ~ 500�C

		�P�_ a + b > c �O�_���� (�T���Ψ�����j��ĤT���) �B a <= b (�קK���ƼƭȥX�{)�A
		�P�_ a^2 + b^2 = c^2 �O�_���ߡA
		��X�ŦX�W�z���󪺼ƭȡC
	*/
	for (c = 1; c <= 500; c++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (a = 1; a <= 500; a++)
			{
				if ((a + b > c) && (a <= b))
				{
					if ((a * a + b * b) == c * c)
						printf("%3d%6d%6d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}