// (Interest Calculator) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float loan_principal; // ��e�U�ڥ���
	float interest_rate;  // �U�ڦ~�Q�v
	int loan_days;        // �U�ڤѼ�
	float interest_total; // �U�ڤ�Q��

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loan_principal);
		
		if (loan_principal == -1) // �U�ڥ�����J��-1�ɡA�h�X�p��{��
			break;

		printf("Enter interest rate: ");
		scanf("%f", &interest_rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &loan_days);

		/*
			��Q���p��:
			��Q�� = ��e�U�ڥ��� * �~�Q�v * �Ѽ� / 365��
		*/
		interest_total = loan_principal * interest_rate * loan_days / 365;

		printf("The interest charge is $%.2f\n", interest_total); // ��X��e��Q��
		
		printf("\n");
	}

	system("pause");
	return 0;
}