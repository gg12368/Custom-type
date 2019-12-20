修改默认对齐数

#include<stdio.h>
#include<windows.h>
#pragma pack(1)
int main()
{
	struct S1
	{
		char c1;	//0
		int i;		//4
		char c2;	//5
	};		//0~5为6
	printf("%d\n", sizeof(struct S1));
	system("pause");
	return 0;
}
