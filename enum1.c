#include<stdio.h>
#include<windows.h>
typedef enum Color
{
	BLUE,
	GREEN,
	WHITE,
	BLACK,
	PINK,
	RED,
	YELLOW
}Color_t;
int main()
{
	Color_t c = BLUE;
	c = YELLOW;
	printf("%d\n", BLUE);
	printf("%d\n", GREEN); 
	printf("%d\n", WHITE);
	printf("%d\n", BLACK);
	printf("%d\n", PINK);
	printf("%d\n", RED);
	printf("%d\n", YELLOW);
	system("pause");
	return 0;
}
