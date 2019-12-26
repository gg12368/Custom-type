联合大小的计算
联合的大小至少是最大成员的大小。
当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍。
（联合体相对于枚举比较单纯，仅需考虑最大对齐数）

#include<stdio.h>
#include<windows.h>
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un1));	
	printf("%d\n", sizeof(union Un2));
	system("pause");
	return 0;
}
