// (Body Mass Index Calculator) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height; // 儲存 使用者 輸入的身高 (單位:公尺)
	float weight; // 儲存 使用者 輸入的體重 (單位:公斤)
	float BMI_result = 0; // 儲存 BMI 計算的結果

	printf("請輸入身高 (單位:公尺): "); 
	scanf("%f", &height); //將 使用者 輸入身高，儲存到 height 變數

	printf("請輸入體重 (單位:公斤): ");
	scanf("%f", &weight); //將 使用者 輸入體重，儲存到 weight 變數

	BMI_result = weight / (height * height); // 計算 使用者 BMI 數值

	printf("\n");

	printf("BMI 數值: %.2f\n", BMI_result + 0.005); // 打印 使用者 BMI 數值
	
	// 判斷 BMI 狀況
	if (BMI_result < 18.5)	  
		// 使用者 BMI < 18.5
		printf("過輕: 低於 18.5\n");
	else if (BMI_result < 25) 
		// 18.5 <= 使用者 BMI < 25.0
		printf("正常: 18.5 與 24.9 之間\n");
	else if (BMI_result < 30) 
		// 25.0 <= 使用者 BMI < 30.0
		printf("過重: 25 與 29.9 之間\n");
	else
		// 使用者 BMI >= 30.0
		printf("肥胖: 大於等於 30\n"); 

	printf("\n");

	system("pause");
	return 0;
}