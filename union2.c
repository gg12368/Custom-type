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
	//下面的输出结果是一样的吗
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	//是一样的。c和i都是联合体内第一个成员。在具体使用时，都是唯一的一个成员。
	system("pause");
	return 0;
}
