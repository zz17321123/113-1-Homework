// (Car-Pool Savings Calculator) �{��
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float total_distance;
	float gas_money;
	float kilometer_per_liter;
	int parking_fee;
	int tolls;
	int total_cost;
	
	printf("�п�J �@�Ѫ��`���{�� (���:����): ");
	scanf("%f", &total_distance);

	printf("�п�J �T�o�@���ɪ�����: ");
	scanf("%f", &gas_money);

	printf("�п�J �����@���ɯ��p�h�֤���: ");
	scanf("%f", &kilometer_per_liter);

	printf("�п�J �@�Ѫ������O: ");
	scanf("%d", &parking_fee);

	printf("�п�J �@�Ѫ��q��O (�L���O): ");
	scanf("%d", &tolls);

	printf("\n");

	/*
		�p��}���@����`�@���O��k�G
		(1) �N �`���{��(Km) / �C���ɯ��p�h�֤��� (Km/L) �p��X�@�Ѷ}�����ӴX���ɨT�o
		(2) �N �p��X�Ӫ� �T�o���ɼ� * �C���ɨT�o���� �o�X �}���Ү��ӨT�o������
		(3) �N �Ү��ӨT�o������ + �@�Ѫ������O + �@�Ѫ��q��O �o�X �}���@���`�@��O (+ 0.5�O���F�N���B�� �|�ˤ��J ���B��) 
	*/
	total_cost = (total_distance / kilometer_per_liter) * gas_money + parking_fee + tolls + 0.5;
	printf("�}���@���`�@��O: %d ��\n", total_cost);

	system("pause");
	return 0;
}