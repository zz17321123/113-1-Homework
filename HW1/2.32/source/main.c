// (Body Mass Index Calculator) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height; // �x�s �ϥΪ� ��J������ (���:����)
	float weight; // �x�s �ϥΪ� ��J���魫 (���:����)
	float BMI_result = 0; // �x�s BMI �p�⪺���G

	printf("�п�J���� (���:����): "); 
	scanf("%f", &height); //�N �ϥΪ� ��J�����A�x�s�� height �ܼ�

	printf("�п�J�魫 (���:����): ");
	scanf("%f", &weight); //�N �ϥΪ� ��J�魫�A�x�s�� weight �ܼ�

	BMI_result = weight / (height * height); // �p�� �ϥΪ� BMI �ƭ�

	printf("\n");

	printf("BMI �ƭ�: %.2f\n", BMI_result + 0.005); // ���L �ϥΪ� BMI �ƭ�
	
	// �P�_ BMI ���p
	if (BMI_result < 18.5)	  
		// �ϥΪ� BMI < 18.5
		printf("�L��: �C�� 18.5\n");
	else if (BMI_result < 25) 
		// 18.5 <= �ϥΪ� BMI < 25.0
		printf("���`: 18.5 �P 24.9 ����\n");
	else if (BMI_result < 30) 
		// 25.0 <= �ϥΪ� BMI < 30.0
		printf("�L��: 25 �P 29.9 ����\n");
	else
		// �ϥΪ� BMI >= 30.0
		printf("�έD: �j�󵥩� 30\n"); 

	printf("\n");

	system("pause");
	return 0;
}