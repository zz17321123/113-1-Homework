// (Table of Squares Cubes) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%-8s%-8s%-8s\n", "number", "square", "cube"); // ���L number square cube ���D�B����U�@��

	for (int i = 0; i <= 10; i++)
	{
		int num;		// �x�s number
		int square_num; // �x�s number ���誺���G
		int cube_num;	// �x�s number �ߤ誺���G

		num = i;
		square_num = i * i;
		cube_num = i * i * i;

		printf("%-8d", num);		// ���L number (�ƭȦV������A��Ƥ����ɪť�)
		printf("%-8d", square_num); // ���L���誺 number
		printf("%-8d\n", cube_num); // ���L�ߤ誺 number �B����U�@��
	}
	
	system("pause");
	return 0;
}