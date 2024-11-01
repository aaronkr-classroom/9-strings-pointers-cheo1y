//strings.c
#include <stdio.h>
#include <string.h>

int main(void)
{
	char hello[6] = { 'H', 'e', 'l', 'l', 'o', 0 };
	char world[6] = { 'W', 'o', 'r', 'l', 'd', 0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s", hello, world, ment);

	char worry[] = "Don't worry, be happy!";
	char worry_ko[] = "걱정 마. 행복할 거야.";
	printf("\n\n%s\n%s", worry, worry_ko);

	getch();
	return 0;
}