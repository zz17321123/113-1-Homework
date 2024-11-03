// (Changing the Case) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input_char;	// 使用者輸入字元 變數
	char convert_char;  // 轉換使用者輸入字元 變數

	while (1)
	{
		printf("Enter an alphabet (# to end): ");
		scanf(" %c", &input_char);

		if (input_char == '#') // 當使用者輸入字元為 # ，跳出while迴圈結束程式
			break;

		if ((input_char >= 'A') && (input_char <= 'Z'))
		{
			convert_char = input_char + 0x20; // 將使用者輸入大寫英文字母，轉換成小寫英文字母
			printf("Convert an alphabet: %c\n", convert_char);
		}
		else if ((input_char >= 'a') && (input_char <= 'z'))
		{
			convert_char = input_char - 0x20; // 將使用者輸入小寫英文字母，轉換成大寫英文字母
			printf("Convert an alphabet: %c\n", convert_char);
		}
		else
			printf("Error: Please try again.\n"); // 當輸入不是 英文字母 或 # 時，顯示錯誤並要求使用者重新輸入

		printf("\n");
	}
	
	system("pause");
	return 0;
}