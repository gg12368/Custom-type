结构体传参

#include<stdio.h>
#include<windows.h>
	struct A
	{
		char x[1024 * 1024 ];
		int a;
		char b;
		double c;
	};
	void fun(struct A obj)
	{

	}
int main()
{
	struct A x;		//struct A* x;
	int i = 0;
	for (; i < 50000; i++)
	{
		fun(x); //fun(&x)
	}
	system("pause");
	return 0;
}

注：
使用注释比较好。
函数传参时，参数是需要压栈的，会有时间和空间上的开销。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
只有数组传参会发生降维，结构体传参不发生降维，所以结构体传参除非特殊需要，一律传指针。
