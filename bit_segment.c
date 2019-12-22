位段
本质：压缩存储，并不考虑效率。
位段的成员必须是int、unsigned int、signed int或char。位段的成员名后面有一个冒号和一个数字。
比如：（其中，A是位段类型）

#include<stdio.h>
#include<windows.h>
	struct A
	{
		int _a : 2;
		int _b : 5;
		int _c : 10;
		int _d : 30;

	};
int main()
{
	printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}
