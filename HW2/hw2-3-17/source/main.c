// (Credit Limit Calculator) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int   account_number;   // �Ȥ�Ȧ�b��
	float beginnig_balance; // �Ȥ���ĥd�o�Ӥ��l�l�B
	float total_charged;    // �Ȥ�o�Ӥ���O�`�B
	float total_credits;    // �Ȥ�o�Ӥ�J�b�`�B
	float credit_limit;     // �Ȧ椹�\�ɥΪ��B������
	float new_balance;      // �x�s���ĥd�s�l�B

	while (1)
	{
		printf("Enter account number (-1 to end): "); // ��J�Ȧ�b��
		scanf("%d", &account_number);

		if (account_number == -1) // �b����J��-1�ɡA�h�X�p��{��
			break;

		printf("Enter beginning balance: "); // ��J�o�Ӥ��l�l�B
		scanf("%f", &beginnig_balance);
		printf("Enter total charges: ");     // ��J�o�Ӥ���O�`�B
		scanf("%f", &total_charged);
		printf("Enter total credits: ");     // ��J�o�Ӥ�J�b�`�B
		scanf("%f", &total_credits);
		printf("Enter credit limit: ");      // ��J�Ȧ椹�\�ɥΪ��B������
		scanf("%f", &credit_limit);

		/*
			�p����ĥd�s�l�B:
			�s�l�B = ��l�l�B + ���O�`�B - �J�b�`�B
		*/ 
		new_balance = beginnig_balance + total_charged - total_credits;

		if (new_balance > beginnig_balance) // �P�_�s�l�B�O�_�W�L�¾l�B
			printf("Account:      %d\n", account_number); // ��ܻȦ�b��
			printf("Credit limit: %.2f\n", credit_limit); // ��ܪ��ĥd�B�׭���
			printf("Balance:      %.2f\n", new_balance);  // ��ܪ��ĥd�s�l�B
			printf("Credit Limit Exceeded.\n");

		printf("\n");
	}
	
	system("pause");
	return 0;
}