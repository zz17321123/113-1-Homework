// (Sales Commission Calculator) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float gross_sales;    // �W�P�P��ӫ~���`�B
	float earnings_total; // �W�g�`�@��o���~��

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &gross_sales); //��J�W�P���ӫ~���`�B
		
		if (gross_sales == -1) // �P���`�B��J��-1�ɡA�h�X�p��{��
			break;

		/*
			�p���`�@��o���~��:
			�`�~�� = (�P���`�B * 9%) + 200��
		*/
		earnings_total = (gross_sales * 0.09) + 200;
		
		printf("Salary is: $%.2f\n", earnings_total); //����`�@��o���~��

		printf("\n");
	}

	system("pause");
	return 0;
}