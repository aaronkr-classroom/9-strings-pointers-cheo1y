// tips.c
#include <stdio.h>

void Test1(short data)
{
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);
}

void Test2(short* ptr)
{
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n", soft);

	*ptr = 3;
}

int main(void)
{
	short tips = 5;
	printf("tips = %d\n", tips);

	Test1(tips);
	Test2(&tips); // 메모리 주소를 전송

	printf("tips = %d\n", tips);

	getch();
	return 0;
}