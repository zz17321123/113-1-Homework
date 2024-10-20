// (Salary Calculator) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hours_worked;    // �u�@�ɶ�
	float hourly_rate;   // ���~
	float excess_salary; // �[�Z�O
	float total_salary;  // �`�~��

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours_worked);

		if (hours_worked == -1) // ��J�u�@�ɶ���-1�ɡA�h�X�p��{��
			break;

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourly_rate);

		/*
			�`�~���p��:
			�P�_�u�@�ɶ��O�_�W�L40�p�ɡA�p�G�W�L40�p��:

			(�q�D�إi�o���A��u�@�ɶ��W�L40�p�ɡA����C�B�~1�p�ɤu�@�ɶ��A�N�n��I1.5�p�ɪ��~��)
			�[�Z�O = (�u�@�ɶ� - 40) * ���~ * 1.5��
			�`�~�� = 40�p�� * ���~ + �[�Z�O

			�Ϥ��u�@�ɶ��S���W�L40�p��:

			�`�~�� = �u�@�ɶ� * ���~
		*/
		if (hours_worked > 40)
		{
			excess_salary = (hours_worked - 40) * hourly_rate * 1.5; 
			total_salary = 40 * hourly_rate + excess_salary; 
		}
		else
			total_salary = hours_worked * hourly_rate;
		
		printf("Salary is $%.2f\n", total_salary);

		printf("\n");
	}

	system("pause");
	return 0;
}