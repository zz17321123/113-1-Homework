// (Modified Compound-Interest Program) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal = 5000;   // ����
	float current_rate = 0.1; // ��e�Q�v
	float amount = 0;         // �`���B

	printf("%s%21s\n", "Year", "Amount on deposit");

	for (int year = 1; year <= 15; year++)
	{
		amount = principal * (1 + current_rate); // �p���~�`���B

		current_rate += 0.005; // �C�~�W�[0.5%�Q�v
		principal = amount; // �N��~�`���B�ǭȵ������A�@���U�@�~�������ϥ�
		
		printf("%4d%21.2f\n", year, amount); //��X1~15�~�M�C�~���`���B
	}

	system("pause");
	return 0;
}