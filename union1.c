联合的特点
联合的成员是共用同一块内存空间的，这样一个联合体变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）。联合体内所有成员都是联合体内第一成员。
<1>区分大小端：

#include<stdio.h>
#include<windows.h>
union Un
{
	char c;
	int i;
};
int main()
{
	union Un un;
	un.i = 1;				//0x 00 00 00 01
	printf("%d\n", un.c);	//此计算机是小端，低权值位放于低地址处，为01 00 00 00.
	system("pause");
	return 0;
}
