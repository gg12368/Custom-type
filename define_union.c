联合
引入：联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，特征是这些成员共用同一块空间（所以联合也叫共用体）。联合体内所有成员共用一块空间。
1>联合类型的定义

#include<stdio.h>
#include<windows.h>
union Un
{
	char c;
	int i;
};
int main()
{
	//联合体变量的定义
	union Un un;
	//计算联合变量的大小
	printf("%d\n", sizeof(un));
	system("pause");
	return 0;
}
